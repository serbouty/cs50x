#include <stdio.h>

/**
 * Print the memory address of an integer.
 *
 * '&'    Address Operator
 * '*'    Dereference Operator
 *
 */
int main(void)
{
    int n = 50;

    printf("%i\n", n);

    /* Declare a pointer to store the memory address instead of the value itself. */
    int *p = &n;

    /* Print the memory address of n. */
    printf("%p\n", p);

    /* Print the value with the memory address. */
    printf("%i\n", *p);
}