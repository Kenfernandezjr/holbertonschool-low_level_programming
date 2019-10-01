#include "holberton.h"


/**
 * rev_string - function that reserves a string.
 *
 * @s: str held the word Holberton and putting it in reverse.
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char *x = s;
	char y;
	int counter;

	counter = 0;

	for (; *s != '\0'; s++)
	{
		counter++;
	}
	s--;
	for (counter /= 2; counter > 0; counter--)
	{
		y = *s;
		*s = *x;
		*x = y;
		x++;
		s--;
	}
}
