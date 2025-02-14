/**
 * Preprocessing (1): use preprocessor directive to find relevant code,
 * then copy and paste it to the current source file.
 *
 * Compiling (2): make any source code as assembly code,
 * providing instructions for the CPU.
 */

#include <stdio.h>

void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

void meow()
{
    printf("Meow\n");
}

/**
 * Assembling (3): make the assembly code as machine code,
 * commonly binary code, readable by the CPU.
 *
 * Linking (4): combine every objects from the assembling process into an executable.
 */