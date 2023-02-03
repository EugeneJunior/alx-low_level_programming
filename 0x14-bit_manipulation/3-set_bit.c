#include "main.h"
/**
 * set_bit - set the bit of a number at a given index
 * @n: the whose bit we want to set
 * @index: position of the bit we want to set
 *
 * Return: returns -1 if bit setting fails
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = (1 << index) | *n;
	if (*n << index & 1)
		return (1);
	else
		return (-1);
}
