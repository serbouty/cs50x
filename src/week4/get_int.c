#include <stdio.h>

/**
 * 'get_int' implementation from CS50 library.
 */
int main(void)
{
    int n;

    /* Prompt for the user. */
    printf("n: ");

    /**
     * Scan the user input, initialize the variable.
     *
     * Expect the address of the variable.
     */
    scanf("%i", &n);

    /* Print the value. */
    printf("n: %i\n", n);
}