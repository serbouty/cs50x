#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int hash(const char *word);

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
    node *table[26]; /* Initialize an hash table for twenty-six nodes. */

    node *list = malloc(sizeof(node)); /* Add an element. */

    if (list == NULL)
    {
        printf("ERROR: memory not allocated for first node.");
        return 1;
    }

    list->name = "Mario";

    int id = hash(list->name); /* Generate the correct key from the hash function. */

    list->number = &id;

    table[id] = list; /* Map the element with the hash table. */

    const char *data = table[id]->name; /* Access data from the hash table. */

    printf("Data: %s", data);

    free(list); /* Free resource from memory. */

    return 0;
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