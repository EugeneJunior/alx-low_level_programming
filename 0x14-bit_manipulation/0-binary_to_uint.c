#include "main.h"
/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: a string of 1 and 0 elements
 *
 * Return: 0 if b is NULL or *b == '\0', otherwise returns
 * an unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i, exp = strlen(b) - 1;

	unsigned int uint = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] - '0') == 1 || (b[i] - '0') == 0)
			uint += (b[i] - '0') * (1 << exp--);

		if (b[i] != '0' && b[i] != '1')
			return (0);

	}
	return (uint);
}
