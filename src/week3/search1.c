#include "../lib/cs50.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
    string games[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    /* Use pointers instead of cs50 to avoid conflicts. */
    const char *pX = get_string(NULL, "String: ");

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(games[i], pX) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}