#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'the program's description'
 * a
 * aa
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	/* your code goes there */
	printf("Last digit of %d is", n);
	if (last > 5)
	{
		printf(" %d and is greater than 5\n", last);
	}
	else if (last == 0)
	{
		printf(" %d and is 0\n", last);
	}
	else if (last < 6 && last != 0)
	{
		printf(" %d and is less than 6 and not 0\n", last);
	}
	return (0);
}

