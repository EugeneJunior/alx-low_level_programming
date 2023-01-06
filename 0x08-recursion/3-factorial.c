#include "main.h"
/**
 * factorial - finds factorial of a given number
 * @n: input number
 *
 * Return: retuns factorial if n > 0, others returns -1
 */

int factorial(int n)
{

	int sum = 1;

	int i;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		for (i = n; i > -1; i--)
		{
			if (i == 0)
			{
				i = 1;
				break;
			}
			sum *= i;
		}
		sum *= i;
		return (sum);
	}

}
