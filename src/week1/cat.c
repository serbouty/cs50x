#include <stdio.h>

int get_positive_int(void);
void meow(int n);

/**
 * Meowing from the prompt.
 */
int main(void)
{
    int times = get_positive_int();

    meow(times);
    return 0;
}

/**
 * Ask how many meows to print.
 */
int get_positive_int(void)
{
    int number;

    do
    {
        printf("Number: ");
        scanf(" %i", &number);

    } while (number < 1); /* Repeat until the number is positive. */

    return number;
}

/**
 * Print meows n times after user input.
 */
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}