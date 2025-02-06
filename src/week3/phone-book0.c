#include "../lib/cs50.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
    /* Wrong design.*/
    string names[] = {"David", "John", "Yuliia"};
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750", "+1-617-495-1000"};

    const char *pX = "John";

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], pX) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}