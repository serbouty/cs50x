#include <stdio.h>

/**
 * Testing precision between integers, floats and doubles.
 */
int main(void)
{
    /* Prompt the user for x. */
    int x;
    printf("> x: ");
    scanf("%i", &x);

    /* Prompt the user for y. */
    int y;
    printf("> y: ");
    scanf("%i", &y);

    int int_value;
    float float_value;
    double double_value;

    if (y != 0) /* Divide by zero forbidden. */
    {
        int_value = x / y;
        float_value = (float)x / y;   /* Type casting to obtain a float, lose precision. */
        double_value = (double)x / y; /* Type casting to obtain a double, keep precision. */
    }
    else
    {
        printf("Math error: Attempted to divide by zero.");

        return 1;
    }

    printf("> 32 bits: %i\n", int_value); /* Precision not represented for an integer.*/
    printf("> 32 bits: %.50f\n", float_value);
    printf("> 64 bits: %.50f\n", double_value);

    return 0;
}