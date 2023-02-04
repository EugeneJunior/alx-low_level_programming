#include "main.h"
/**
 * get_endianness - checks the byte order
 *
 *Return: 1 for little endian or 0 for big endian
 */
int get_endianness(void)
{
	unsigned long int n, b;

	n = 1024;

	b = n & 1;
	if (b == 0)
		return (1);
	else
		return (0);
}
