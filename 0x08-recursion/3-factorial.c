#include "main.h"
#include <stdlib.h>
/**
 * factorial - finds factorial of a given number
 * @n: input number
 *
 * Return: retuns factorial if n > 0, others returns -1
 */

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	exit(0);
}
