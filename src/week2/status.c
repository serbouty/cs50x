#include <stdio.h>

int main(int argc, char *argv[])
{
    /* arg[0] and arg[1] must be defined to use arguments. */
    if (argc != 2)
    {
        printf("Missing commend-line argument\n");
        return 1;
    }

    printf("Hello, %s\n", argv[1]);
    return 0;
}