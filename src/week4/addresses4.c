#include <stdio.h>

/**
 * Pointer arithmetic overview with strings.
 */
int main(void)
{
    char *s = "HI!";

    /* Start printing the string with the next address. */
    printf("%s\n", s + 1);
}