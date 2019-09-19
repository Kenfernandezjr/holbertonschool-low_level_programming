#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main - function for main is null  */

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
