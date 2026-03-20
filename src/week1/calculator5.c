// Division with ints, demonstrating truncation

#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x;
    printf("What's x? ");
    scanf("%i", &x);

    // Prompt user for y
    int y;
    printf("What's y? ");
    scanf("%i", &y);

    // Check division by zero
    if (y == 0)
    {
        printf("Math error: Attempted to divide by zero.");
        return 1;
    }
    else
    {
        // Divide x by y
        printf("%i\n", x / y);
        return 0;
    }
}
