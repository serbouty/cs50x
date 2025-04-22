#include <stdio.h>

/* Declare prototypes before main for the compiler. */
int get_positive_int(void);
void meow(int n);

/**
 * Prompt the user to print meows any times he want.
 */
int main(void)
{
    int times = get_positive_int(); /* Call function below. */

    meow(times); /* Call function below. */

    return 0;
}

/**
 * Prompt the user for a positive integer.
 */
int get_positive_int(void)
{
    int number;

    do
    {
        printf("Number: ");
        scanf(" %i", &number);
    } while (number < 1); /* Ask until number is positive. */

    return number;
}

/* Print cat's meowing. */
void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("Meow\n");
    }
}