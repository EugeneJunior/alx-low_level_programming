#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
/**
 * print_all - print anything
 * @format: string of types to print
 * @...: variable number of non-keyword arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;

	char *k, *v = "\0";

	va_list args;

	j = strlen(format);
	i = 0;
	va_start(args, format);
	while (i != (j - 1) && j != 0 && format != NULL)
	{
		switch ((char) format[i])
		{
			case 'c':
				printf("%c, ", va_arg(args, int));
				break;
			case 's':
				k = va_arg(args, char *);
				if (*k != *v)
				{
					printf("%s, ", k);
					break; }
				printf("(nil), ");
				break;
			case 'f':
				printf("%f, ", va_arg(args, double));
				break;
			case 'i':
				printf("%ld, ", va_arg(args, long int));
				break;
			default:
				break; }
		++i;
	}
	while (i == (j - 1) && format != NULL)
	{
		switch ((char) format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				k = va_arg(args, char *);
				if (*k != *v)
				{
					printf("%s", k);
					break; }
				printf("(nil)");
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'i':
				printf("%ld", va_arg(args, long int));
				break;
			default:
				break; }
		++i; }
	va_end(args);
	printf("\n");
}
