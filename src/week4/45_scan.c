#include <stdio.h>

/**
 * get_int() alternative from CS50's library.
 */
int main(void)
{
    int n;

    printf("n: ");

    /**
     * Scan the user input, initialize the variable.
     *
     * Expect the address of the variable.
     */
    scanf("%i", &n);

    printf("n: %i\n", n);
}