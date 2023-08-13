#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    // Print lowercase alphabet
    for (i = 0; i < 26; i++)
    {
        putchar('a' + i);
    }

    // Print uppercase alphabet
    for (i = 0; i < 26; i++)
    {
        putchar('A' + i);
    }

    putchar('\n');

    return (0);
}
