#include <stdlib.h>
#include "main.h"

/**
 * print_sign - prints the sign of an interger to stdout
 * @n: input parameter
 *
 * Return: returns 1 if signed c is positive,
 * 0 if c is zero and (-1) if signed is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		if (n > 0)
			return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		if (n == 0)
			return (0);
	}
	else
	{
		_putchar('-');
		if (n < 0)
			return (-1);
	}
	exit(0);

}
