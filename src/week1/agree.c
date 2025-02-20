#include <stdio.h>

int main(void)
{
    char answer;

    printf("Do you want to continue? [Y/n] ");

    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y')
    {
        printf("Continue.\n");
        return 0;
    }
    else if (answer == 'n' || answer == 'N')
    {
        printf("Abort.\n");
        return 1;
    }
}