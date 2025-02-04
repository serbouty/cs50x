#include "../lib/cs50.c"
#include <stdio.h>

int main(void)
{
    /* Prompt a user for an int. */
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

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