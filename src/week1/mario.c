#include <stdio.h>

void print_row(int n);

int main(void)
{
    const int n = 3;

    /* Build mystery boxes. */
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    /* Build obstacles. */
    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }

    /* Build blocks. */
    for (int i = 0; i < n; i++)
    {
        print_row(n);
    }
}

/* Build rows. */
void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}