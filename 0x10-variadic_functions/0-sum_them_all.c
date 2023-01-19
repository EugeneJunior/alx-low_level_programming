#include "variadic_functions.h"
/**
 * sum_them_all - adds all its arguments
 * @n: start of arguments
 * @...: the remaining arguments
 *
 * Return: 0 if n == 0, otherwise sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < (int) n; i++)
	{
		sum += va_arg(args, const unsigned int);

	}
	return (sum);
}
