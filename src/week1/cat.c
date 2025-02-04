#include "../lib/cs50.c"
#include <stdio.h>

/* Declare methods before main to avoid compilation failure. */
int get_positive_int(void);
void meow(int n);

int main(void)
{
    /* Ensure the integer is positive before calling meow. */
    int times = get_positive_int();

    meow(times);
}

int get_positive_int(void)
{
    int n;

    do
    {
        /* Prompt a user for an int. */
        n = get_int("Number: ");

    } while (n < 1);

    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}