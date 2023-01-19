#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: separate numbers
 * @n: number of arguments to print
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < (int) n; i++)
	{
		if (separator[0] != '\0' && i != (int) (n - 1))
			printf("%d%s", va_arg(args, int), separator);
		if (i == (int)  (n - 1))
			printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");

}
