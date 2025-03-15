#include <stdio.h>

int binary_search(int numbers[], int target, int left_door, int right_door, int steps);

/**
 * Binary search for an ordered list of integers.
 *
 * Runtime of O(log n), Ω(1).
 *
 */
int main(void)
{
    /* Initialize an ordered list. */
    int numbers[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    /* Set the limit for the left. */
    int left_door = 0;

    /* Set the limit for the right. */
    int right_door = 11;

    /**
     * Runtime of O(log n).
     */
    int target = 70;
    int steps = 0;

    binary_search(numbers, target, left_door, right_door, steps);

    /**
     * Runtime of O(1);
     */
    target = 50;
    steps = 0;

    binary_search(numbers, target, left_door, right_door, steps);
}

/**
 * Binary search function.
 */
int binary_search(int numbers[], int target, int left_door, int right_door, int steps)
{

    /* Set the middle of the array. */
    int middle_door = left_door + (right_door - left_door) / 2;

    /* 'If no doors left'' */
    if (left_door > right_door)
    {
        steps++;
        /* 'Return false' */
        printf("Target not found, %i steps taken.\n", steps);
        return 1;
    }

    /* 'If number behind middle door' */
    if (target == numbers[middle_door])
    {
        steps++;

        /* Set the word for O(n) or O(1). */
        char *word = "step";
        if (steps > 1)
        {
            word = "steps";
        }
        /* 'Return true' */
        printf("%i found, %i %s taken.\n", target, steps, word);
    }
    /* 'Else if number < middle door' */
    else if (target < numbers[middle_door])
    {
        steps++;
        /* 'Search left half' by constraining the right. */
        return binary_search(numbers, target, left_door, middle_door - 1, steps);
    }

    /* 'Else if number > middle door' */
    else if (target > numbers[middle_door])
    {
        steps++;
        /* 'Search right half' by constraining the left. */
        return binary_search(numbers, target, middle_door + 1, right_door, steps);
    }

    return 0;
}