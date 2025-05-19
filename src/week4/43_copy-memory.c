#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> /* Standard library for memory management. */
#include <string.h>

/**
 * Allocate memory for the copy of a string.
 */
int main(void)
{
    char *s;

    printf("String: ");

    scanf("%s", s);

    /**
     * Allocate enough memory to handle the new string.
     *
     * +1 to add the null byte character \0.
     */
    char *t = malloc(strlen(s) + 1);

    /* 'malloc' return NULL if an error is met. */
    if (t == NULL)
    {
        return 1;
    }

    /* 'strcpy' alternative, manually assign elements to a new string. */
    for (int i = 0, n = (int)strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    /* Cannot use the memory if the length is 0 (NULL). */
    if (strlen(t) > 0)
    {
        t[0] = (char)toupper(t[0]);
    }

    printf("lowercase s: %s\n", s);
    printf("uppercase t: %s\n", t);

    /* Avoid memory leak by freeing the resource when a process is done. */
    free(t);

    return 0;
}