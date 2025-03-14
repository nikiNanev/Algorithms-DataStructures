#include <stdio.h>
#include <string.h>

#define MAX_LENGTH_OPTION 64

int main(int argc, char **argv)
{

    if (argc == 2)
    {
        char argument[MAX_LENGTH_OPTION];

        strncpy(argument, argv[1], MAX_LENGTH_OPTION - 1);
        argument[MAX_LENGTH_OPTION - 1] = '\0';
        fprintf(stdout, "Argument: %s\n", argument);

        //argument/s should lead to different algorithms and data structures
    }
    else
    {
        fprintf(stdout, "Usage: %s <options>\n", argv[0]);
        return -1;
    }

    return 0;
}