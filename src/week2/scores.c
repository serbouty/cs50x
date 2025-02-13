#include "../lib/cs50.c"
#include <stdio.h>

/**
 * bool     1 byte       8 bits
 * int      4 bytes     32 bits
 * long     8 bytes     64 bits
 * float    4 bytes     32 bits
 * double   8 bytes     64 bits
 * char     1 byte       8 bits
 */
int main(void)
{
    const int N = 3;
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    /* Print average. */
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
