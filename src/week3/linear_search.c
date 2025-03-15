#include <stdio.h>

/**
 * Linear search for an unordered list of integers.
 *
 * Runtime of O(n), Ω(1).
 *
 */
int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    /**
     * Linear search for O(n).
     */
    int target = 100;
    int steps = 0;

    for (int i = 0; i < 7; i++)
    {
        steps++;

        if (numbers[i] == target)
        {
            printf("Target found using %i steps.\n", steps);
        }
    }

    /**
     * Linear search for O(1).
     */
    target = 20;
    steps = 0;

    for (int i = 0; i < 7; i++)
    {
        steps++;

        if (numbers[i] == target)
        {
            printf("Target found using %i step.\n", steps);
            return 0;
        }
    }

    printf("Target not found.");
    return 1;
}