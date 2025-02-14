#include <stdio.h>

/**
 * Test precision between floats and doubles.
 */
int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);

    int y;
    printf("y: ");
    scanf("%i", &y);

    double result;

    if (y != 0)
    {
        result = x / y;
    }
    else
    {
        printf("Math error: Attempted to divide by zero.");
        return 1;
    }

    printf("%f\n", result);
    return 0;
}