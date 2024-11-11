#include <string.h>

#define MAX_COMMAND 4096
#define MAX_PATH 4096
#define MAX_EXTENSION 16
#define MAX_TIMESTAMP 16


void generate_ffmpeg_mkv_command(char *command_ret, char *start, char *end, char *filepath)
{
    sprintf(command_ret, "ffmpeg -ss %s -to %s -i %s -c copy %s", start, end, filepath);
}

void generate_ffmpeg_mp4_command(char *command_ret, char *start, char *end, char *filepath)
{
    sprintf(command_ret, "ffmpeg -ss %s -to %s -i %s -c copy %s", start, end, filepath);
}


int verify_timestamp(char *time)
{

}

void get_extension(char *extension_ret, const char *filename)
{
    char *p = NULL;

    p = strrchr(filename, '.');

    if (p)
        strcpy(extension_ret, p + 1);

}

