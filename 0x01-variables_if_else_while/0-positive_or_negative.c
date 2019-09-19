#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - no return value
 *
 * Return: - void
 *
 * if - provides a positive number when 'n' is greater
 *
 * else if - provides a is zero if  'n' is equal
 *
 * else - if neither requirements are met, will be Negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
