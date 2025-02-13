#include "../lib/cs50.c"
#include <stdio.h>

int main(void)
{
    /* Prompt a user for a char. */
    char c = get_char("Do you agree? ");

    /* Ask for a confirmation. */
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}