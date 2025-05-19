#include <stdio.h>

void print_row(int n);

/**
 * Build blocks from the Mario game with ASCII art.
 */
int main(void)
{
    const int n = 3; /* Edit height for each pattern. */

    /* Blocks. */
    printf("Blocks:\n");
    for (int i = 0; i < n; i++)
    {
        print_row(n); /* Edit width for each row. */
    }

    /* Coins. */
    printf("Coins:\n");
    printf("  ");
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    /* Obstacles. */
    printf("Obstacles:\n");
    for (int i = 0; i < n; i++)
    {
        printf("  ");
        printf("#\n");
    }
}

/**
 * Print multiple obstacles to obtain a large block.
 */
void print_row(int n)
{
    printf("  ");
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}