#include "../lib/cs50.c"
#include <stdio.h>

int main(void)
{
    int dollars = 1;
    bool cond = 1;

    /* Provoke an integer overflow. */
    while (cond)
    {
        /* Prompt a user for a char. */
        char c = get_char("Here's $%i. Double it and give it to the next person? ", dollars);

        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }

    printf("Here's $%i", dollars);
}