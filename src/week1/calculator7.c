// Floats

#include <stdio.h>

int main(void)
{
    // Prompt user for x
    float x;
    printf("What's x? ");
    scanf("%f", &x);

    // Prompt user for y
    float y;
    printf("What's y? ");
    scanf("%f", &y);

    // Check division by zero
    if (y == 0.0)
    {
        printf("Math error: Attempted to divide by zero.");
        return 1;
    }
    else
    {
        // Divide x by y
        printf("%.5f\n", x / y); // 5 digits after the decimal point
        return 0;
    }
}
