#include <stdio.h>

typedef struct
{
    char *name;
} person;

/* Encapsulate a data type into another data type. */
typedef struct
{
    person people[50];

    /* Keeping tracks of valid values. */
    int size;
} queue;

/**
 * Abstract data type.
 *
 * FIFO data type, First In First Out.
 *
 * Enqueue to put elements into the queue.
 * Dequeue to remove elements from the queue.
 *
 */
int main(void)
{
    queue current_queue;
    current_queue.size = 0;

    /**
     * Enqueue the first element.
     */
    current_queue.people[0].name = "FirstUser";
    current_queue.size++;

    /**
     * Enqueue three elements.
     */
    for (int i = 1; i < 4; i++)
    {
        current_queue.people[i].name = "NextUser";
        current_queue.size++;
    }

    /**
     * Enqueue the last element.
     */
    current_queue.people[4].name = "LastUser";
    current_queue.size++;

    /* Queue with five elements. */
    printf("Queue:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %s", current_queue.people[i].name);
    }
    printf("\n");
    printf("Size: %i\n", current_queue.size);

    /**
     * Dequeue the first element.
     */
    queue new_queue;
    new_queue.size = current_queue.size;

    /* Remove the first element. */
    for (int i = 0; i < 4; i++)
    {
        new_queue.people[i].name = current_queue.people[i + 1].name;
    }

    /* Update the size. */
    new_queue.size--;

    /* Update the queue. */
    current_queue = new_queue;

    /* Queue with four elements. */
    printf("Queue:");
    for (int i = 0; i < 4; i++)
    {
        printf(" %s", current_queue.people[i].name);
    }
    printf("\n");
    printf("Size: %i\n", current_queue.size);

    return 0;
}
