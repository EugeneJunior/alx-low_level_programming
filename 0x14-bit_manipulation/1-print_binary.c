#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: decimal representation of the number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int m, last_digit_n, masking_value = 1;

	int i, count = 0;

	m = n;
	while (n != 0)
	{
		last_digit_n = n & masking_value;
		if (last_digit_n == 1)
			++count;
		if (last_digit_n == 0)
			++count;
		if (last_digit_n != 0 && last_digit_n != 1)
			exit(-1);
		n = n >> 1;
	}

	for (i = count - 1; i >= 0; i--)
	{
		last_digit_n = m >> i & masking_value;
		if (last_digit_n == 0)
			_putchar(48);
		if (last_digit_n == 1)
			_putchar(49);
	}

	if (m == 0)
		_putchar(48);
}
