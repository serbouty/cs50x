#include <stdio.h>
#include <stdlib.h>

/**
 * Container for a dynamic arrays.
 *
 * Storage:
 *
 * array: Dynamically-allocated array.
 * capacity: Size of the dynamically-allocated array.
 * size: Number of elements currently in the array.
 *
 */

typedef struct
{
    int capacity;
    int size;
    int *ptr;
} dynamic;

/**
 * Dynamic Arrays:
 *
 * Store a pointer to a dynamically allocated array,
 * and replace it with a newly-allocated array as needed.
 *
 * Operations:
 *
 * get(i)           returns element at location i*
 * set(i, val)      sets element i to val*
 * pushBack(val)    adds val to the end
 * remove(i)        removes element at location i*
 * size()           returns the number of elements

 * Runtimes:
 *
 * get(i):          O(1)
 * set(i, val):     O(1)
 * pushBack(val):   O(n)
 * remove(i):       O(n)
 * size():          O(1)
 *
 */

int main(void)
{
    dynamic array; /* Initialize an empty array. */
    array.size = 0;

    /* Allocate enough memory to add four integers. */
    array.capacity = 4;
    array.ptr = malloc(array.capacity * sizeof(int));

    /* Check if the allocation is successful. */
    if (array.ptr == NULL)
    {
        printf("ERROR: not enough memory.\n");
        return 1;
    }

    /**
     * size(): O(1).
     */
    printf("Initial:\n");
    printf("  size: %i\n", array.size);
    printf("  capacity: %i\n", array.capacity);

    /* Add elements in the array: O(1). */
    for (int i = 0; i < array.capacity; i++)
    {
        array.ptr[i] = i + 1;

        /* Update the size to keep track of each new element. */
        array.size++;
    }

    /* Check array state. */
    printf("Insert:");
    for (int i = 0; i < array.capacity; i++)
    {
        printf(" %i", array.ptr[i]);
    }
    printf("\n");
    printf("  size: %i\n", array.size);
    printf("  capacity: %i\n", array.capacity);

    /**
     * get(index): O(1).
     */
    int index;
    index = 0;

    int getValueForIndexZero = array.ptr[index];
    printf("get(0) = %i\n", getValueForIndexZero);

    /**
     * set(index, value): O(1).
     */
    int value;
    value = 5;

    array.ptr[index] = value;
    printf("set(0, 5) =");
    for (int i = 0; i < array.capacity; i++)
    {
        printf(" %i", array.ptr[i]);
    }
    printf("\n");

    /**
     * pushBack(value): O(n).
     */
    value = 6;

    printf("  size: %i\n", array.size);
    printf("  capacity: %i\n", array.capacity);

    if (array.size == array.capacity)
    {
        /* Update the capacity. */
        array.capacity += 1;

        /* Update the size of the array. */
        int *new_array = malloc(array.capacity * sizeof(int));

        /* Assign all elements to the new array.*/
        for (int i = 0; i < array.size; i++)
        {
            new_array[i] = array.ptr[i];
        }

        /* Remove the previous array from the memory. */
        free(array.ptr);

        /* Set the pointer to the new array. */
        array.ptr = new_array;

        printf("Update:");
        for (int i = 0; i < 5; i++)
        {
            printf(" %i", array.ptr[i]);
        }
        printf("\n");
        printf("  size: %i\n", array.size);
        printf("  capacity: %i\n", array.capacity);
    }

    /* Push the element at the end of the array. */
    array.ptr[array.size] = value;

    printf("pushBack():");
    for (int i = 0; i < array.capacity; i++)
    {
        printf(" %i", array.ptr[i]);
    }
    printf("\n");
    array.size++;
    printf("  size: %i\n", array.size);
    printf("  capacity: %i\n", array.capacity);

    /**
     * removeElement(index): O(n).
     */
    index = 2;

    /* Start from the index to remove. */
    for (int i = index; i < array.size; i++)
    {
        /* Replace the current value with the next element. */
        array.ptr[i] = array.ptr[i + 1];
    }

    /* Update the size. */
    array.size--;

    printf("removeElement(2):");
    for (int i = 0; i < 5; i++)
    {
        printf(" %i", array.ptr[i]);
    }
    printf("\n");
    printf("  size: %i\n", array.size);
    printf("  capacity: %i\n", array.capacity);

    free(array.ptr);

    return 0;
}