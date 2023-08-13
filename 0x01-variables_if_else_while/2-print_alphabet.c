#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * a
 * aa
 * Return: Always 0 (Success)
 */
int main(void) 
{
	int i;	
	for (i = 0; i < 13; i++)
	{
		putchar('a' + i);
	}

	for (i = 13; i < 26; i++) 
	{
		putchar('a' + i);
	}

	putchar('\n');

    return 0;
}

