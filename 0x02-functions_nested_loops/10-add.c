#include "main.h"
#include <stdlib.h>
/**
 * add - adds two integers
 * @a: first input parameter
 * @b: second input parameter
 *
 * Return: returns the result of a + b
 */

int add(int a, int b)
{
	if (a != 0 || b != 0)
	{
		return (a + b);
	}
	else if ( a == 0 && b == 0)
	{
		return (0);
	}
	else if (a == 0 && b != 0)
	{
		return (b);
	}
	else if (a != 0 && b == 0)
	{
		return (a);
	}
	
	exit(0);
}
