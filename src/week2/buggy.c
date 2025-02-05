#include "../lib/cs50.c"
#include <stdio.h>

void print_column(int height);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        /* Garbage value before the breakpoint. */
        int h = get_int("Height: ");

        print_column(h);
    }
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}
