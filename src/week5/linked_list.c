#include <stdio.h>
#include <stdlib.h>

/**
 * Contiguous memory is not necessary with linked list.
 *
 * Runtime of O(n) for searching through a node.
 */
typedef struct node
{
    /* Data of the node. */
    int number;

    /* Pointer linked to the next piece of memory. */
    struct node *next;
} node;

/**
 * Linked list appending nodes to a list.
 */
int main(void)
{
    /* Pointer for the first node of the list. */
    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        /* Create a new node. */
        node *n = malloc(sizeof(node));

        /* Sanity check. */
        if (n == NULL)
        {
            free(list);
            return 1;
        }

        /* Arrow to access the member through the address. */
        n->number = i + 1;

        /**
         * Link the current node with the previous one.
         *
         * Runtime of O(1) for inserting a node, but values are now backwards.
         */
        n->next = list;

        /* Update the first node with the last node created. */
        list = n;
    }

    /* Start the loop with the first node. */
    int loop = 0;
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        loop++;
        printf("Node %i = %i\n", loop, ptr->number);
    }

    /* Free the memory. */
    node *ptr = list;
    while (ptr != NULL)
    {
        /* Keep track of the next address before deleting the current node. */
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}