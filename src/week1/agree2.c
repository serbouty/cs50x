// Logical operators

#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c;
    printf("Do you agree? ");
    scanf("%c", &c);

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else
    {
        printf("Not agreed.\n");
    }

    return 0;
}
