#include <stdio.h>

void print_row(int n);

/**
 * Build elements found in a Mario game on the prompt.
 */
int main(void)
{
    const int n = 3;

    /* Build a mystery box. */
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    /* Build an obstacle. */
    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }

    /* Build a block. */
    for (int i = 0; i < n; i++)
    {
        print_row(n);
    }
}

/**
 * Build each row for a block.
 */
void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}