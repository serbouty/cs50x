#include "../lib/cs50.c"
#include <stdio.h>

int main(void)
{
    /* Prompt a user for an int. */
    int x = get_int("x: ");
    int y = get_int("y: ");

    /* Use type casting to test precision between floats and doubles. */
    printf("%f\n", (double)x / y);
}