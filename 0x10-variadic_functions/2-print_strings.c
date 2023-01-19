#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: separate strings
 * @n: number of arguments to print
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < (int) n; i++)
	{
		if (separator[0] != '\0' && i != (int) (n - 1))
			printf("%s%s", va_arg(args, char *), separator);
		if (i == (int) (n - 1))
		{
			printf("%s", va_arg(args, char *));
		}

	}
	va_end(args);
	printf("\n");
}
