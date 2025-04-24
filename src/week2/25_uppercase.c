#include <stdio.h>
#include <string.h>

/**
 * Alternative for toupper() function.
 */
int main(void)
{
    const char *string = "Hello";

    for (int i = 0, n = strlen(string); i < n; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z') /* Compare ASCII values. */
        {
            printf("%c", string[i] - 32); /* Substract ASCII value if lowercase. */
        }
        else
        {
            printf("%c", string[i]); /* Print value if upercase. */
        }
    }

    printf("\n");

    return 0;
}