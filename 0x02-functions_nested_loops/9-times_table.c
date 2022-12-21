#include "main.h"
/**
 * times_table - prints 9 times table stating with zero
 */

void times_table(void)
{
	int n, i, j;

	n = 9;

	for (i = 0; i < (n + 1); i++)
	{
		for (j = 0; j < (n + 1); j++)
		{
			if ((i * j) < 10)
			{
				if (j == 0)
				{

				}
				else
				{
					_putchar(' ');
				}
				_putchar(i * j + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}
