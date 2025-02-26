#include <stdio.h>

int main(void)
{
    /* Declare a single character for an answer. */
    char answer;

    /* Prompt the user for 'Y' or 'n'. */
    printf("Do you want to continue? [Y/n] ");
    scanf("%c", &answer);

    /* Agreed. */
    if (answer == 'y' || answer == 'Y')
    {
        printf("Continue.\n");
        return 0;
    }
    /* Decline. */
    else if (answer == 'n' || answer == 'N')
    {
        printf("Abort.\n");
        return 1;
    }
}