#include <stdio.h>

/**
 * Pointer arithmetic with characters.
 */
int main(void)
{
    const char *s = "HI!";

    printf("%c\n", *s); /* H */

    /* Do math on addresses. */
    printf("%c\n", *(s + 1)); /* I */
    printf("%c\n", *(s + 2)); /* ! */
}