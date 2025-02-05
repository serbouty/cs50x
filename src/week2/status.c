#include "../lib/cs50.c"
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing commend-line argument\n");

        return 1; /* Failure */
    }

    printf("hello, %s\n", argv[1]);

    return 0; /* Success */
}
