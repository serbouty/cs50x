#include <stdio.h>
#include "../lib/cs50.c"

/* Standard library for characters. */
#include <ctype.h>

int main(void)
{
    char *s = get_string(NULL, "s: ");

    /* Different variables with same addresses, same location in the memory. */
    char *t = s;

    /* Explicit conversion. */
    s[0] = (char)toupper(s[0]);
    t[0] = (char)toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}