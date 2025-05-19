#include <stdio.h>
#include <stdlib.h>

/**
 * Reallocate memory with 'realloc'.
 */
int main(void)
{
    /* Allocate three times the size of an integer. */
    int *list = malloc(3 * sizeof(int));

    /* Verify if memory is allocated correctly. */
    if (list == NULL)
    {
        /* Free memory to avoid keeping unvalid data. */
        free(list);
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    /* Time passes, a new value is needed. */

    /* Allocate in the same location on the memory. */
    int *tmp = realloc(list, 4 * sizeof(int));

    if (tmp == NULL) /* Verify if the memory is allocated correctly. */
    {
        free(list);
        free(tmp);
        return 1;
    }

    tmp[3] = 4; /* Add the value needed. */

    list = tmp; /* Process complete. */

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list); /* Time passes, the new list is not needed anymore. */

    return 0;
}