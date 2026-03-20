// long

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    long long dollars = 2305843009213693952; // 64-bit integer
    bool is_true = 1;

    while (is_true)
    {
        // Prompt user to agree
        char c;
        printf("Here's $%lld. Double it and give to next person? ", dollars);
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

    printf("Here's $%lld.\n", dollars);

    return 0;
}
