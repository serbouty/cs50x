#include <stdio.h>
#include <string.h>

#include "../cs50/cs50.c"

/**
 * Update a text file from the command line.
 */
int main(void)
{
    FILE *file = fopen("file.csv", "w"); /* Opening file in write mode. */

    char *name = get_string(NULL, "Name: ");

    char *number = get_string(NULL, "Number: ");

    if (file == NULL) /* File not found. */
    {
        printf("File not found.\n");
        return 1;
    }

    fprintf(file, "%s, %s\n", name, number); /* Save values in the csv file. */

    fclose(file); /* Close the resource. */

    return 0;
}