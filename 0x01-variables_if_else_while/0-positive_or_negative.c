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
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
