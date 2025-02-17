#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "../lib/cs50.c"

/* Standard library for memory management. */
#include <stdlib.h>

/**
 * Allocate memory for the copy of a string.
 */
int main(void)
{
    char *s = get_string(NULL, "s: ");

    /* Allocate enough memory to handle the new string. */
    char *t = malloc(strlen(s) + 1); /* +1 to add the null byte character \0 */

    /* 'malloc' return NULL if an error is met */
    if (t == NULL)
    {
        return 1;
    }

    /* 'strcpy' alternative, manually assign elements to the new string. */
    for (int i = 0, n = (int)strlen(s); i <= n; i++) /* <= n for /0 */
    {
        t[i] = s[i];
    }

    /* Don't touch the memory if the length is 0 (NULL). */
    if (strlen(t) > 0)
    {
        t[0] = (char)toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    /* Avoid memory leak by freeing the resource when the process is done. */
    free(t);
}