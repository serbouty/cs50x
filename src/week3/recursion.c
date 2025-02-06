#include "../lib/cs50.c"
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    /* Stop recursion to avoid an infinite loop. */
    if (n <= 0)
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
     * Rewind to process each call.
     */
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}