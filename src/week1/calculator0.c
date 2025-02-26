#include <stdbool.h>
#include <stdio.h>

/**
 * Provoke an integer overflow.
 */
int main(void)
{
    /* Initialize the condition. */
    bool condition = 1;

    /* Initialize the starting value. */
    int value = 1024;

    /* Declare a single character for an answer. */
    char answer;

    /* Accept with 'y' enough times to provoke an integer overflow. */
    while (condition)
    {
        printf("Here's %i. Double it? ", value);

        /* Beware of \n left by scanf, whitespace mandatory. */
        scanf(" %c", &answer);

        if (answer == 'y' || answer == 'Y')
        {
            /* Double the value. */
            value *= 2;
        }
        else
        {
            /* Stop the loop. */
            break;
        }
    }

    printf("Here's %i.", value);
    return 0;
}