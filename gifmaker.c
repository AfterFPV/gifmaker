#include <stdlib.h>
#include <stdio.h>

#include "gifmaker.h"

//create short mp4 from downloaded movies
//    search for mp4 or movie file
//    generate ffmpeg command to cut to short movie


int main( int argc, char *argv[] )
{
    char base_dir[] = "d:\\s2mccaffr\\Videos\\Series";
    char do_this_command[MAX_COMMAND];
    char filepath[MAX_PATH];
    char extension[MAX_EXTENSION];
    char start[MAX_TIMESTAMP];
    char end[MAX_TIMESTAMP];

    
    get_extension(extension, filepath);

    if (strcmp("mkv", extension) == 0) 
    {
        generate_ffmpeg_mkv_command(do_this_command, start, end, filepath);
    }
    else if (strcmp("mp4", extension) == 0)
    {
        generate_ffmpeg_mp4_command(do_this_command, start, end, filepath);
    } 
    else 
    {
        printf("File extension not supported: %s\n\n", extension);
        return 1;
    }

    printf("command:\n%s\n\n", do_this_command);

	return 0;
}
