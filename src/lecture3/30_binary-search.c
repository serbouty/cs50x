#include <stdio.h>

int binary_search(int array[], int target, int left, int right, int steps);

/**
 * Binary search for an ordered list of integers.
 *
 * Runtime of O(log n), Ω(1).
 *
 */
int main(void)
{
    /* Initialize an ordered list. */
    int array[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int left = 0; /* Set the limit for the left. */

    int right = 11; /* Set the limit for the right. */

    /**
     * Example for runtime of O(log n).
     */
    int target = 70;
    int steps = 0;

    binary_search(array, target, left, right, steps);

    /**
     * Example for runtime of O(1);
     */
    target = 50;
    steps = 0;

    binary_search(array, target, left, right, steps);
}

/**
 * Binary search algorithm.
 */
int binary_search(int array[], int target, int left, int right, int steps)
{
    int middle = left + (right - left) / 2; /* Set the middle of the array. */

    if (left > right) /* Return false, target not found. */
    {
        steps++;

        printf("Target not found, %i steps taken.\n", steps);

        return 1;
    }

    if (target == array[middle]) /* If target is found. */
    {
        steps++;

        char *word = "step";

        if (steps > 1) /* Set output for O(n) or O(1). */
        {
            word = "steps";
        }

        printf("%i found, %i %s taken.\n", target, steps, word);

        return 0;
    }
    else if (target < array[middle]) /* If result is inferior, search left. */
    {
        steps++;

        /* Reduce the right limit with middle - 1. */
        return binary_search(array, target, left, middle - 1, steps);
    }
    else if (target > array[middle]) /* If result is superior, search right. */
    {
        steps++;

        /* Increase the left limit with middle + 1. */
        return binary_search(array, target, middle + 1, right, steps);
    }
}