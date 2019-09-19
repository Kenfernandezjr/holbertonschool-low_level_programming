#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: - Void
 *
 * if - prints the last digit calculation and is applied to the equation
 *
 * else if - last digit is equal to 0
 *
 * else if - last digit will we be less than 6
 */


int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %i is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %i is %d and is less than 6 and not 0", n, lastDigit);
	}
	return (0);
}
