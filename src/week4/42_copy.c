#include <stdio.h>

#include "../cs50/cs50.c"

/* Standard library for characters. */
#include <ctype.h>

int main(void)
{
    char *s = get_string(NULL, "string: ");

    /* Different variables with same addresses, same location in the memory. */
    char *t = s;

    /* Explicit conversion. */
    t[0] = (char)toupper(t[0]);

    /* Same values. */
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}