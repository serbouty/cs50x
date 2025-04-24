#include <stdio.h>
#include <string.h>

/* Structure defining a person. */
typedef struct
{
    char *name;
    char *number;
} person;

/**
 * Search a user within a phone book.
 */
int main(void)
{
    person people[3];

    people[0].name = "David";
    people[0].number = "+1-617-495-1000";

    people[1].name = "John";
    people[1].number = "+1-949-468-2750";

    people[2].name = "Julia";
    people[2].number = "+1-617-495-1000";

    const char *input = "John";

    printf("Searching John number...\n");

    for (int i = 0; i < 3; i++)
    {
        /* Compare the input with existing names. */
        if (strcmp(people[i].name, input) == 0)
        {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found.\n");

    return 1;
}