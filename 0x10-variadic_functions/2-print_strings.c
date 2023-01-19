#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_strings - prints strings
 * @separator: separate strings
 * @n: number of arguments to print
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, j, k;

	va_list args;

	va_start(args, n);
	k = strlen(separator);
	for (i = 0; i < (int) n; i++)
	{
		printf("%s", va_arg(args, char *));
		for (j = 0; j < k; j++)
		{
			if (separator[0] != '\0' && i != (int) (n - 1))
				printf("%c", separator[j]);
		}

	}
	va_end(args);
	printf("\n");
}
