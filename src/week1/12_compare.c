#include <stdio.h>

/**
 * Compare values between two integers.
 */
int main(void)
{
    /* Prompt the user for x. */
    int x;
    printf("What's x? ");
    scanf("%i", &x);

    /* Prompt the user for y. */
    int y;
    printf("What's y? ");
    scanf("%i", &y);

    /* Conditional loop example. */
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is grater than y\n");
    }
    else if (x == y)
    {
        printf("x is equal to y\n");
    }
}