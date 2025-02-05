#include "../lib/cs50.c"
#include <stdio.h>

/**
 * argc: argument count.
 * argv: argument vector.
 */
int main(int argc, string argv[])
{
    /* Store the name of the program by convention. */
    printf("hello, %s\n", argv[0]);

    /* Print the first argument.*/
    printf("hello, %s\n", argv[1]);
}
