#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last
 * digit of input number to stdout
 * @n: input parameter
 *
 *
 * Return: return last digit of input number
 */

int print_last_digit(int n)
{

	if (n >= 0)
	{
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar((n * -1) % 10 + '0');
	}

	return ((n * -1) % 10);
}
