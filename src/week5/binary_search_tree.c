#include <stdio.h>
#include <stdbool.h>

/**
 * Node for a binary search tree.
 */
typedef struct node
{
    int number;
    /* Lesser than the root. */
    struct node *left;
    /* Greater than the root. */
    struct node *right;
} node;

int main(void)
{
    /* ... */
}

/**
 * Two dimensional binary search tree.
 *
 * Runtime of O(n), optimizable to O(log n).
 */
bool search(node *tree, int number)
{
    /* If no tree is available. */
    if (tree == NULL)
    {
        return 1;
    }

    /* If the target is lesser than the current node. */
    else if (number < tree->number)
    {
        /* Search from the left. */
        return search(tree->left, number);
    }

    /* If the target is greater than the current node. */
    else if (number > tree->number)
    {
        /* Search from the right. */
        return search(tree->right, number);
    }

    /* Target found. */
    else
    {
        return 0;
    }
}