#include "../lib/cs50.c"
#include <stdio.h>
#include <string.h>

/**
 * Update a file from the terminal.
 */
int main(void)
{
    /* Open the csv file in write mode. */
    FILE *file = fopen("phone_book.csv", "w"); /* csv file in build folder */

    /* Prompt the user for a name. */
    char *name = get_string(NULL, "Name: ");

    /* Prompt the user for a number. */
    char *number = get_string(NULL, "Number: ");

    /* File not found. */
    if (file == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    /* Save values in the csv file. */
    fprintf(file, "%s, %s\n", name, number);

    /* Close the resource. */
    fclose(file);

    /* Validate the process. */
    return 0;
}