#include <stdio.h>

/**
 * main - no return value
 *
 * Return: - void
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
			break;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
