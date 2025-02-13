#include "../lib/cs50.c"
#include <stdio.h>

/**
 * Asymptotic Notation:
 *
 * O notation (upper bound)
 *
 * O(n²)
 * O(n log n)
 * O(n)             linear search
 * O(log n)         binary search
 * O(1)
 *
 * Ω notation (lower bound)
 *
 * Ω(n²)
 * Ω(n log n)
 * Ω(n)
 * Ω(log n)
 * Ω(1)             linear search, binary search
 *
 * Θ notation (O = Ω)
 *
 * Θ(n²)
 * Θ(n log n)
 * Θ(n)
 * Θ(log n)
 * Θ(1)
 *
 */
int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    /* Search a number listed above. */
    int n = get_int("Number: ");

    int steps = 0;

    /* Paradigm for linear search. */
    for (int i = 0; i < 7; i++)
    {
        steps++;

        if (numbers[i] == n)
        {
            printf("Found, %i steps.\n", steps);

            return 0;
        }
    }

    printf("Not found, %i steps.\n", steps);

    /* Positive integer mandatory when dealing with errors. */
    return 1;
}