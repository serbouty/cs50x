#include <stdio.h>
#include "../lib/cs50.c"

/**
 * Compare a set of strings between them.
 */
int main(void)
{
    const char *s = get_string(NULL, "s: ");
    const char *t = get_string(NULL, "t: ");

    /* Not working as intended, s and t have a different address. */
    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}