#include "main.h"

/**
 * print_number - prints an integer.
 * @n: number to print
 */

void print_number(int n)
{
	int i;
	
	if (n >= 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			if (n < 10)
			{
				_putchar(i + '0');
				break; }
			else
			{
				if (n / 10 < 10)
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					break; }
				else if ((n / 100) < 10)
				{
					_putchar((n / 100) + '0');
					_putchar((n / 10) % 10 + '0');
					_putchar((n % 10) + '0');
					break; }
				else if ((n / 1000) < 10)
				{
					_putchar((n / 1000) + '0');
					_putchar((n / 100) % 10 + '0');
					_putchar((n / 10)  % 10 + '0');
					_putchar((n % 10) + '0');
					break; }
				else if ((n / 10000) < 10)
				{
					_putchar((n / 10000) + '0');
					_putchar((n / 1000) % 10+ '0');
					_putchar((n / 100) % 10+ '0');
					_putchar((n / 10) % 10 + '0');
					_putchar((n % 10) + '0');
					break; } } } }
	else
	{
		for (i = 0; i < (n * -1)  + 1; i++)
		{
			if ((n * -1) < 10)
			{
				_putchar(45);
				_putchar((n * -1) + '0');
				break;
			}
			else 
			{
				if ((n * -1) / 10 < 10)
				{	_putchar(45);
					_putchar((n / -10) + '0');
					_putchar(((n * -1) % 10) + '0');
					break;
				}
				else if (((n * -1) / 100) < 10)
				{
					_putchar(45);
					_putchar((n / -100) + '0');
					_putchar((n / -10) % 10 + '0');
					_putchar(((n * -1) % 10) + '0');
					break;
				}
				else if (((n * -1) / 1000) < 10)
				{
					_putchar(45);
					_putchar((n / -1000) + '0');
					_putchar((n / -100) % 10 + '0');
					_putchar((n / -10)  % 10 + '0');
					_putchar(((n * -1) % 10) + '0');
					break;
				}
				else if (((n * -1) / 10000) < 10)
				{
					_putchar(45);
					_putchar((n / -10000) + '0');
					_putchar((n / -1000) % 10+ '0');
					_putchar((n / -100) % 10+ '0');
					_putchar((n / -10) % 10 + '0');
					_putchar(((n * -1) % 10) + '0');
					break;
				}

			}

		}
	}


}
