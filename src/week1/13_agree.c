#include <stdio.h>

/**
 * Simulate the process for terms and conditions.
 */
int main(void)
{
    char answer; /* Declare a single character for y or n. */

    /* Prompt the user for permission. */
    printf("Do you want to continue? [Y/n] ");
    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y') /* If the user want to continue. */
    {
        printf("Continue.\n");

        return 0;
    }
    else if (answer == 'n' || answer == 'N') /* If the user want to abort. */
    {
        printf("Abort.\n");

        return 1; /* Failure. */
    }
}