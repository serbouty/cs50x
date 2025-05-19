#include <stdio.h>
#include <string.h>

/**
 * Update a text file from the command line.
 */
int main(void)
{
    FILE *file = fopen("file.csv", "w"); /* Opening file in write mode. */

    char *name;
    char *number;

    printf("Name: ");

    scanf("%s", name);

    printf("Number: ");

    scanf("%s", number);

    if (file == NULL) /* File not found. */
    {
        printf("File not found.\n");
        return 1;
    }

    fprintf(file, "%s, %s\n", name, number); /* Save values in the csv file. */

    fclose(file); /* Close the resource. */

    return 0;
}