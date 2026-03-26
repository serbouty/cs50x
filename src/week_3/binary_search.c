// Implements binary search for integers

#include <stdio.h>

// Prototype
int binary_search(int a[], int from_index, int to_index, int key);

int main(void)
{
    // An ordered array of integers
    // O(n log n)
    int numbers[] = {1, 5, 10, 20, 50, 100, 500};

    // Prompt user for number
    int key;
    printf("Number: ");
    scanf("%i", &key);

    // Search for number
    // O(log n)
    int from_index = 0;
    int to_index = (sizeof(numbers) / sizeof(numbers[0])) - 1;
    binary_search(numbers, from_index, to_index, key);
}

int binary_search(int a[], int from_index, int to_index, int key)
{
    // Find middle element
    int middle = from_index + (to_index - from_index) / 2;

    // If no elements left
    if (to_index < from_index)
    {
        // Return false
        printf("Not found\n");
        return 1;
    }

    // If key is equal to middle element
    if (key == a[middle])
    {
        // Return true
        printf("Found: %i\n", key);
        return 0;
    }

    // Else if key is less than middle element
    else if (key < a[middle])
        // Search left half
        binary_search(a, from_index, (middle - 1), key);

    // Else if key is greater than middle element
    else if (key > a[middle])
        // Search right half
        binary_search(a, (middle + 1), to_index, key);
    return 1;
}
