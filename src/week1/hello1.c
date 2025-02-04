#include "../lib/cs50.c"
#include <stdio.h>

int main(void)
{
    /* Prompt a user for a string. */
    string answer = get_string(NULL, "What's your name ? ");

    printf("hello, %s\n", answer);
}