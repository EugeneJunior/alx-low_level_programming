#include "main.h"
/**
 * set_bit - set the bit of a number at a given index
 * @n: the whose bit we want to set
 * @index: position of the bit we want to set
 *
 * Return: returns -1 if bit setting fails, 1 if success, 0 if n is NULL
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index < 0)
		return (0);

	*n = (1 << index) | *n;
	if (*n << index & 1)
		return (1);
	else
		return (-1);
}
