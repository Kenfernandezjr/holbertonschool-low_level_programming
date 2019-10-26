#include "variadic_functions.h"

/**
 * print_all - functions for print all project.
 * @format: format all day.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int nobody, i = 0;
	char *s;

	while (format)
	{
		va_start(args, format);
		while (format[i])
		{
			nobody = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				nobody = 0;
				break;
			}
			if (format[i + 1] && nobody)
				printf(", ");
			i++;
		}
		va_end(args);
		break;
	}
	printf("\n");
}
