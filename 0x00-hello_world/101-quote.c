#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the string to a standard error output.
 * Return:- 1 as project asked.
 */

int main(void)
{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}
