#include <stdio.h>

/**
 * argc     Argument Count
 * argv     Argument Vector
 */

/**
 * Use arguments to greet the user.
 *
 * command:
 * $ ./greet <name>
 *
 * output:
 * Program: <program>
 * Hello, <name>
 */
int main(int argc, char *argv[])
{
    /* arg[0] and arg[1] must be defined to use arguments. */
    if (argc != 2)
    {
        printf("Missing commend-line argument.\n");
        return 1;
    }

    printf("Program: %s\n", argv[0]); /* Name of the program by convention. */

    printf("Hello, %s\n", argv[1]); /* Print with the first argument. */
}