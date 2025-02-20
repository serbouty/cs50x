#include <stdio.h>

int main(void)
{
    /* H = 72 (01001000) */
    char c1 = 'H';

    /* I = 73 (01001001) */
    char c2 = 'I';

    /* ! = 33 (00100001) */
    char c3 = '!';

    printf("c: %c%c%c\n", c1, c2, c3);

    printf("i: %i %i %i\n", c1, c2, c3);

    char *s = "HI!";

    printf("s: %s\n", s);

    /* s[3] is NUL (00000000) */
    printf("s[3]: %i %i %i %i\n", s[0], s[1], s[2], s[3]);

    char *words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("w0: %s\n", words[0]);
    printf("w1: %s\n", words[1]);

    /* H */
    printf("w00: %c\n", words[0][0]);

    /* B */
    printf("w00: %c\n", words[1][0]);
}
