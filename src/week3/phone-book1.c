#include "../lib/cs50.c"
#include <stdio.h>
#include <string.h>

/* Define a structure. */
typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    /* Better design. */
    person people[3];

    people[0].name = "David";
    people[0].number = "+1-617-495-1000";

    people[1].name = "John";
    people[1].number = "+1-949-468-2750";

    people[2].name = "Yuliia";
    people[2].number = "+1-617-495-1000";

    const char *pX = "John";

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, pX) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}