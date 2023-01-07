#include "main.h"
#include <math.h>

/**
 * _pow_recursion - finds the result
 * of a number raised to another power
 * @x: base number
 * @y: exponent number
 *
 * Return: returns the result of p(x. y) if y < 0, otherwise -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x *= _pow_recursion(x, y - 1);
		return (x);
	}
}

