#include <stdio.h>

int main(void)
{
    /* Define a new keyword replacing 'char *'. */
    typedef char *string;

    string s = "HI!";

    printf("%p\n", s);

    /* Print the address of each element. */
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}