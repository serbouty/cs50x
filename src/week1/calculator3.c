// Overflow

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int dollars = 536870912; // 32-bit integer
    bool is_true = 1;

    while (is_true)
    {
        // Prompt user to agree
        char c;
        printf("Here's $%i. Double it and give to next person? ", dollars);
        scanf(" %c", &c);

        if (c == 'Y' || c == 'y') // Overflow after two attempts
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }

    printf("Here's $%i.\n", dollars);

    return 0;
}
