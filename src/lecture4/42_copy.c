#include <stdio.h>

/* Standard library for characters. */
#include <ctype.h>

int main(void)
{
    char *s;

    printf("String: ");

    scanf("%s", s);

    /* Different variables with same addresses, same location in the memory. */
    char *t = s;

    /* Explicit conversion. */
    t[0] = (char)toupper(t[0]);

    /* Same values. */
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}