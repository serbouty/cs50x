#include <stdio.h>

/**
 * argc     Argument Count
 * argv     Argument Vector
 */
int main(int argc, char *argv[])
{
    /* Store the name of the program by convention. */
    printf("hello, %s\n", argv[0]);

    /* Print the first argument. */
    printf("hello, %s\n", argv[1]);
}