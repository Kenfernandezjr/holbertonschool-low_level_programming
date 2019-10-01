#include "holberton.h"


/**
 * rev_string - check the code for Holberton School students.
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

	for (counter = 0; *s != '\0'; s++)
	{
		counter++;
	}
	s--;
	for (counter /= 2; counter >= 0; counter--)
	{
		y = *s;
		*s = *x;
		*x = y;
		x++;
		s--;
	}
}
