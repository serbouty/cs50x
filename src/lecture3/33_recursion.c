#include <stdio.h>

void draw(int n);

/**
 * Example of a recursive function.
 */
int main(void)
{
    int height;
    printf("Height: ");
    scanf("%i", &height);

    draw(height);
}

void draw(int n)
{
    if (n <= 0) /* Always stop recursion to avoid an infinite loop. */
    {
        return;
    }

    /**
     * Start recursion.
     *
     * Add n draw function on the call stack.
     */
    draw(n - 1);

    /**
     * Start printing when recursion above is done.
     *
     * Rewind to process each function on the stack.
     */
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}