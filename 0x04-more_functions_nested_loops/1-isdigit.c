#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: the uppercase character to be checked
 *
 * Return: returns 1 if c is digit otherwise 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
