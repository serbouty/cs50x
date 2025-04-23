#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *string = "Hello";

    printf("> ");

    /* Initialize two integers at once to avoid calling strlen each time. */
    for (int i = 0, n = strlen(string); i < n; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}