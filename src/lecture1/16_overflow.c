#include <stdbool.h>
#include <stdio.h>

/**
 * Provoke an integer overflow.
 */
int main(void)
{
    bool condition = 1; /* Initialize the condition to true. */

    int value = 1024; /* Initialize the starting value. */

    char answer; /* Declare a single character for y or n. */

    while (condition) /* Accept with 'y' enough times to provoke an integer overflow. */
    {
        printf("Here's $%i. Double it? ", value); /* Print the current value. */

        scanf(" %c", &answer); /* Escape sequence ending scanf, whitespace mandatory. */

        if (answer == 'y' || answer == 'Y')
        {
            value *= 2; /* Double the value. */
        }
        else
        {
            break; /* Quit the loop. */
        }
    }

    printf("You have now $%i.\n", value); /* Print the final value. */

    return 0;
}