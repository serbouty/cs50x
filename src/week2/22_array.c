#include <stdio.h>

/**
 * Array:
 *
 * Contiguous area of memory
 * consisting of equal-size elements indexed
 * by contiguous data of the same type.
 *
 * Runtimes:
 *
 * Insert at the beginning: O(n)
 * Remove from the beginning: O(n)
 *
 * Insert at the end: O(1)
 * Remove from the end: O(1)
 *
 * Insert in the middle: O(n)
 * Remove from the middle: O(n)
 *
 */

int main(void)
{
    /* Initialize an array with a fixed length. */
    int results[3];

    /* Insert at the end: O(1). */
    printf("Insert:");
    for (int i = 0; i < 3; i++)
    {
        results[i] = i;
        printf(" %i", results[i]);
    }
    printf("\n");

    /* Constant-time access to any element: 0(1). */
    int target = results[0];
    printf("Search: %i", target);

    target = results[1];
    printf(" %i", target);

    target = results[2];
    printf(" %i\n", target);
}