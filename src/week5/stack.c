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
} stack;

/**
 * Abstract data type.
 *
 * LIFO data type, Last In First Out.
 *
 * Push to put elements on top of the stack.
 * Pop to remove elements on top of the stack.
 *
 */
int main(void)
{
    stack current_stack;
    current_stack.size = 0;

    /**
     * Push the first element.
     */
    current_stack.people[0].name = "FirstUser";
    current_stack.size++;

    /**
     * Push three elements.
     */
    for (int i = 1; i < 4; i++)
    {
        current_stack.people[i].name = "NextUser";
        current_stack.size++;
    }

    /**
     * Push the last element.
     */
    current_stack.people[4].name = "LastUser";
    current_stack.size++;

    /* Stack with five elements. */
    printf("Stack:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %s", current_stack.people[i].name);
    }
    printf("\n");
    printf("Size: %i\n", current_stack.size);

    /**
     * Pop the last element.
     */
    stack new_stack;
    new_stack.size = current_stack.size;

    /* Remove the last element. */
    for (int i = 0; i < 4; i++)
    {
        new_stack.people[i].name = current_stack.people[i].name;
    }

    /* Update the size. */
    new_stack.size--;

    /* Update the stack. */
    current_stack = new_stack;

    /* Stack with four elements. */
    printf("Stack:");
    for (int i = 0; i < 4; i++)
    {
        printf(" %s", current_stack.people[i].name);
    }
    printf("\n");
    printf("Size: %i\n", current_stack.size);

    return 0;
}