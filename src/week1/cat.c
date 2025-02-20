#include <stdio.h>

int get_positive_int(void);
void meow(int n);

int main(void)
{
    int times = get_positive_int();

    meow(times);
    return 0;
}

int get_positive_int(void)
{
    int number;

    do
    {
        printf("Number: ");
        scanf(" %i", &number);

    } while (number < 1);

    return number;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}