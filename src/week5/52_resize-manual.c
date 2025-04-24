#include <stdio.h>
#include <stdlib.h>

/**
 * Reallocate memory manually.
 */
int main(void)
{
    /* Allocate three times the size of an integer. */
    int *list = malloc(3 * sizeof(int));

    /* Verify if the memory is allocated correctly. */
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

    /**
     * Allocate four times the size of an integer,
     * but on a new memory location.
     */
    int *tmp = malloc(4 * sizeof(int));

    /* Verify if the memory is allocated correctly. */
    if (tmp == NULL)
    {
        free(list);
        free(tmp);
        return 1;
    }

    /* Transfer elements from the old array to the new location. */
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4; /* Add the value needed. */

    free(list); /* Erase the old array from memory. */

    list = tmp; /* Process complete. */

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list); /* Time passes, the new list is not needed anymore. */

    return 0;
}