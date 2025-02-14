#include <stdbool.h>
#include <stdio.h>

/**
 * Provoke an integer overflow.
 */
int main(void)
{
    bool condition = 1;
    int value = 1024;

    char answer;

    while (condition)
    {
        printf("Here's %i. Double it? ", value);

        /* Beware of \n left by scanf, whitespace mandatory. */
        scanf(" %c", &answer);

        if (answer == 'y' || answer == 'Y')
        {
            value *= 2;
        }
        else
        {
            break;
        }
    }

    printf("Here's %i.", value);
    return 0;
}