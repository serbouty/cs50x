#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/* Protype of the hash function. */
int hash(const char *word);

/* Define a linked element. */
typedef struct node
{
    char *name;
    int *number;
    struct node *next;
} node;

/**
 * Relates to an hash function, takes input to produce output.
 *
 * Combination of arrays and linked lists.
 *
 */
int main(void)
{
    /* Initialize an hash table for twenty-six nodes. */
    node *table[26];

    /* Add an element. */
    node *list = malloc(sizeof(node));

    if (list == NULL)
    {
        printf("ERROR: memory not allocated for first node.");
        return 1;
    }

    list->name = "Mario";

    /* Generate the correct key from the hash function. */
    int id = hash(list->name);
    list->number = &id;

    /* Map the element with the hash table. */
    table[id] = list;

    /* Access data from the hash table. */
    const char *data = table[id]->name;

    printf("Data: %s", data);

    /* Free resource from memory. */
    free(list);
}

/**
 * Return an integer between 0 and 25.
 *
 * Runtime of O(n).
 */
int hash(const char *word)
{
    /* 65 to 90 - 65 = 0 to 25. */
    return toupper(word[0]) - 'A';
}