// get_string and printf with %s

#include <stdio.h>

int main(void)
{
    // Prompt user for name
    char name[5];
    printf("What's your name? ");
    scanf("%5s", name);

    printf("Hello, %s\n", name);

    return 0;
}
