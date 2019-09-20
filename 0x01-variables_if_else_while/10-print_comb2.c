#include <stdio.h>

/**
 * main - no return value
 *
 * Return: - void
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 100; a++)
	{
		b = a / 10;
		c = a % 10;


		putchar(b + '0');
		putchar(c + '0');

		if (a < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
