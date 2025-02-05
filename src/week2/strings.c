#include "../lib/cs50.c"
#include <stdio.h>

int main(void)
{
    char c1 = 'H'; /* H = 72 (01001000) */
    char c2 = 'I'; /* I = 73 (01001001) */
    char c3 = '!'; /* ! = 33 (00100001) */

    printf("c: %c%c%c\n", c1, c2, c3);

    printf("i: %i %i %i\n", c1, c2, c3);

    string s = "HI!";

    printf("s: %s\n", s);

    printf("s[3]: %i %i %i %i\n", s[0], s[1], s[2], s[3]); /* s[3] = NUL (00000000) */

    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("w0: %s\n", words[0]);
    printf("w1: %s\n", words[1]);

    printf("w00: %c\n", words[0][0]); /* H */
    printf("w00: %c\n", words[1][0]); /* B */
}
