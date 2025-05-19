#include <stdio.h>

/**
 * '&'    Address Operator
 * '*'    Dereference Operator
 */

/**
 * Print the memory address of an integer.
 */
int main(void)
{
    /**
     * Accessing memory address and value.
     */
    int n = 50;

    int *p = &n;

    printf("Address: %p\n", p); /* Memory address of n. */

    printf("Value: %i\n", *p); /* Value of n through the address. */

    /**
     * Searching elements with memory addresses.
     */
    typedef char *string;

    string s = "HI!";

    printf("%p\n", s);

    printf("Address of s|0]: %p\n", &s[0]);

    printf("Address of s|1]: %p\n", &s[1]);

    printf("Address of s|2]: %p\n", &s[2]);

    printf("Address of s|3]: %p\n", &s[3]);

    printf("s: %c\n", *s);

    printf("s + 1: %c\n", *(s + 1));

    printf("s + 2: %c\n", *(s + 2));
}