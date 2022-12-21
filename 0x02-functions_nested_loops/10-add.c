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
	int res = 0;

	if (a != 0)
	{
		if (b == 0)
		{
			res += a;

			return (res);
		}
		else
		{	res += (a + b);
			return (res);
	} }
	else
	{
		if (b == 0)
		{
			res += b;
			return (res);
		}
		else
		{
			res += b;
			return (res);
		}
	}

	exit(0);

}
