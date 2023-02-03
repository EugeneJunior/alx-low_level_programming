#include "main.h"
/**
 * get_bit - sets the value of a bit a index
 * @n: number whose bit we want to set
 * @index: position of bit we want to set
 *
 * Return: return index or -1 if it bit setting fails
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int v = n >> index;

	if (v & 1)
		return (1);
	else if (v ^ 1)
		return (0);
	else
		return (-1);
}
