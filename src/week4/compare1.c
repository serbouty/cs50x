#include <stdio.h>
#include "../lib/cs50.c"

/**
 * Comparing integers between them.
 */
int main(void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");

    /* Working as intended. */
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}