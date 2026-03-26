// Implements linear search for integers

#include <stdio.h>

int main(void)
{
    // An array of integers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // Prompt user for number
    int n;
    printf("Number: ");
    scanf("%i", &n);

    // Search for number
    // O(n)
    int length = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found: %i\n", n);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
