#include <stdio.h>

int main(void)
{
    /* Initialize a two dimensional array with three elements for each array. */
    int numbers[2][3] = {{0, 1, 2}, {3, 4, 5}};

    /* Access elements on a multidimensional array. */
    for (int i = 0; i < 2; i++)
    {
        /* Iterate through each elements within an array. */
        for (int j = 0; j < 3; j++)
        {
            printf("numbers[%i][%i] = %i\n", i, j, numbers[i][j]);
        }
    }
}