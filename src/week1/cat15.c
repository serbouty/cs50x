// Return value

#include <stdio.h>

int get_positive_int(void); // Explicit declaration
void meow(int n);

int main(void)
{
    int n = get_positive_int();
    meow(n);

    return 0;
}

// Get number of meows
int get_positive_int(void)
{
    int n;

    // Prompt user for integer
    do
    {
        printf("Number: ");
        scanf("%i", &n);
    } while (n < 1);

    return n;
}

// Meow some number of times
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
