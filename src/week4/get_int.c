#include <stdio.h>

/**
 * 'get_int' implementation in native C code.
 */
int main(void)
{
    /*  */
    /**
     * Declare a variable, not initialized.
     *
     * Contains a garbage value.
     */
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