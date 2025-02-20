#include <stdio.h>

void swap(int *a, int *b);

/**
 * Memory loads:
 *
 * (1) machine code     # binary code
 * (2) globals          # external variables
 * (3) heap             # 'malloc', grows downward
 * (4) stack            # functions, grows upward
 *
 * Buffer overflow:
 *
 * Calling 'malloc' too many times result to an heap overflow.
 * Calling functions too many times result to a stack overflow.
 */
int main(void)
{
    int x = 1;
    int y = 2;

    printf("x i %i, y is %i\n", x, y);

    /* Passing addresses from 'x' and 'y' as references. */
    swap(&x, &y);

    printf("x i %i, y is %i\n", x, y);
}

/* Passing by reference.*/
void swap(int *a, int *b)
{
    int tmp = *a; /* save a */
    *a = *b;      /* replace a with b */
    *b = tmp;     /* replace b with save a */
}