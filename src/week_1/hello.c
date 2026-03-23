// printf and scanf with %s

#include <stdio.h>

int main(void)
{
    // Prompt for user's name
    char name[5];
    printf("What's your name? ");
    scanf("%5s", name);

    printf("Hello, %s\n", name);
    return 0;
}
