#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%i", &height);

    draw(height);
}

void draw(int n)
{
    /* Iterate with the height (y). */
    for (int i = 0; i < n; i++)
    {
        /* Iterate for each row (x). */
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}