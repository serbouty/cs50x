#include <stdio.h>

/**
 * Compare a pair of integers using address operator.
 */
int main(void)
{
    int i;
    int j;

    printf("Integer i: ");
    scanf("%i", &i);

    printf("Integer j: ");
    scanf("%i", &j);

    if (i == j)
    {
        printf("There are the same.\n");
    }
    else
    {
        printf("There are different.\n");
    }
}