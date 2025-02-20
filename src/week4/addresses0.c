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

    int *p = &n;

    /* Print the memory address of n. */
    printf("%p\n", p);

    /* Print the value of n through the address. */
    printf("%i\n", *p);
}