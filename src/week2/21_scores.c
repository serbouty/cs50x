#include <stdio.h>

/**
 * Types:
 *
 * bool     1 byte       8 bits
 * int      4 bytes     32 bits
 * long     8 bytes     64 bits
 * float    4 bytes     32 bits
 * double   8 bytes     64 bits
 * char     1 byte       8 bits
 *
 * string   ? byte       ? bits
 * array    ? byte       ? bits
 */

/**
 * Calculate the average from three scores.
 */
int main(void)
{
    const int n = 3; /* Edit the number of scores needed. */
    int scores[n];

    for (int i = 0; i < n; i++) /* Prompt the user for n scores. */
    {
        printf("> Enter a score: ");
        scanf("%i", &scores[i]);
    }

    /* Calculate then print an average. */
    printf("> Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}