// Conditionals

#include <stdio.h>

int main(void)
{
    // Prompt user for integers
    int x;
    printf("What's x? ");
    scanf("%i", &x);

    int y;
    printf("What's y? ");
    scanf("%i", &y);

    // Compare integers
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }

    return 0;
}
