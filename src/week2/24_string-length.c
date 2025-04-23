#include <stdio.h>

int string_length(char const *string);

int main(void)
{
    const char *string = "Hello";

    int length = string_length(string);

    printf("> Length: %i\n", length);

    return 0;
}

/**
 * Alternative for strlen() function.
 */
int string_length(char const *string)
{
    int n = 0; /* Start with the first character. */

    while (string[n] != '\0') /* Last element is NULL, ending the string. */
    {
        printf("> %i: %c\n", n, string[n]); /* name[n] = character */

        n++;
    }

    printf("> %i: %c\n", n, string[n]); /* name[n] = NULL */

    return n;
}