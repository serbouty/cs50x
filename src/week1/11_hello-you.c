#include <stdio.h>

/**
 * Using an alternative without CS50's library.
 */
int main(void)
{
    char name[5]; /* Declare a string with five characters. */

    printf("> What's your name? "); /* Prompt the user for a name. */

    scanf("%5s", name); /* Fetch the user input. */

    printf("> Hello, %s\n", name);

    return 0;
}