#include <stdio.h>
#include <stdlib.h>

/**
 * Contiguous memory is not necessary with linked list.
 *
 * Runtime of O(n) for searching through a node.
 */
typedef struct node
{
    int number; /* Data of the node. */

    struct node *next; /* Pointer linked to the next piece of memory. */
} node;

/**
 * Linked list appending nodes to a list.
 */
int main(void)
{
    node *list = NULL; /* Pointer for the first node of the list. */

    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node)); /* Create a new node. */

        if (n == NULL) /* Sanity check. */
        {
            free(list);
            return 1;
        }

        n->number = i + 1; /* Arrow to access the member through the address. */

        /**
         * Link the current node with the previous one.
         *
         * Runtime of O(1) for inserting a node, but values are now backwards.
         */
        n->next = list;

        list = n; /* Update the first node with the last node created. */
    }

    int loop = 0; /* Start the loop with the first node. */

    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        loop++;
        printf("Node %i = %i\n", loop, ptr->number);
    }

    node *ptr = list; /* Free the memory. */

    while (ptr != NULL)
    {
        /* Keep track of the next address before deleting the current node. */
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}