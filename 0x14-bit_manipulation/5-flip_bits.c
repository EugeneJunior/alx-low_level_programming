#include "main.h"
/**
 * flip_bits - flibs bit of two numbers
 * @n: decimal repr of first number
 * @m: decimal repr of second number
 *
 * Return: the number of times bits are fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int last_digit_m, last_digit_n, masking_value = 1;

	unsigned int count = 0;

	while (m != 0 || n != 0)
	{
		last_digit_m = m & masking_value;
		last_digit_n = n & masking_value;
		if (last_digit_m ^ last_digit_n)
			++count;
		n = n >> 1;
		m =  m >> 1;
	}
	return (count);
}
