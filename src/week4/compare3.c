#include <stdio.h>
#include "../lib/cs50.c"

/* Standard library for strings. */
#include <string.h>

/**
 * Comparing strings between them.
 */
int main(void)
{
    const char *s = get_string(NULL, "s: ");
    const char *t = get_string(NULL, "t: ");

    /*  */
    /**
     * Working as intended, compare values with pair of characters.
     *
     * Loop until \0.
     */
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}