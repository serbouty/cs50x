// Prints a command-line argument

#include <stdio.h>

int main(int argc, char *argv[])
{
    // Check command-line argument
    if (argc == 2)
    {
        printf("%s\n", argv[0]);
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
    return 0;
}
