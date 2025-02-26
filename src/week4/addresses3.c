#include <stdio.h>

/**
 * Pointer arithmetic overview with characters.
 */
int main(void)
{
    const char *s = "HI!";

    /* Print H. */
    printf("%c\n", *s);

    /* Print I. */
    printf("%c\n", *(s + 1));

    /* Print !. */
    printf("%c\n", *(s + 2));
}