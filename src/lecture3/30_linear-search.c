#include <stdio.h>

/**
 * Linear search for an unordered list of integers.
 *
 * Runtime of O(n), Ω(1).
 */
int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    /**
     * Linear search for O(1).
     */
    int target = 20;
    int steps = 0;

    for (int i = 0; i < 7; i++)
    {
        steps++;

        if (numbers[i] == target)
        {
            printf("20: target found using %i step.\n", steps);
            return 0;
        }
    }

    /**
     * Linear search for O(n).
     */
    target = 100;
    steps = 0;

    for (int i = 0; i < 7; i++)
    {
        steps++;

        if (numbers[i] == target)
        {
            printf("100: target found using %i steps.\n", steps);
        }
    }

    printf("Target not found.");

    return 1;
}