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


    generate_ffmpeg_mkv_command(do_this_command, start, end, filepath);
    printf("command:\n%s\n\n", do_this_command);

	return 0;
}
