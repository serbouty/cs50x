#include <stdio.h>

int main(void)
{
    char c1 = 'H'; /* H = 72 (01001000) */

    char c2 = 'I'; /* I = 73 (01001001) */

    char c3 = '!'; /* ! = 33 (00100001) */

    printf("c: %c%c%c\n", c1, c2, c3);

    printf("i: %i %i %i\n", c1, c2, c3);

    char *s = "HI!";

    printf("s: %s\n", s);

    printf("s[3]: %i %i %i %i\n", s[0], s[1], s[2], s[3]); /* s3: 00000000, NULL.*/

    char *words[2]; /* Declare an array for two elements. */

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("words[0]: %s\n", words[0]); /* Print HI!. */

    printf("words[1]: %s\n", words[1]); /* Print BYE!. */

    printf("words[0][0]: %c\n", words[0][0]); /* Print H. */

    printf("words[1][0]: %c\n", words[1][0]); /* Print B. */
}