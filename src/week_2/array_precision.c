// Averages three numbers using an array

#include <stdio.h>

int main(void)
{
    // Get scores
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Score: ");
        scanf(" %i", &scores[i]);
    }

    // Print average
    printf("Average: %.2f\n", ((scores[0] + scores[1] + scores[2]) / 3.0));
}
