#include <stdio.h>

/**
 * Pointer arithmetic with strings.
 */
int main(void)
{
    char *s = "HI!";

    /**
     * A string is an address of the
     * first character of the string.
     *
     * Start printing the string with the next address.
     */
    printf("%s\n", s + 1); /* I! */
}