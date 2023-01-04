#include "main.h"

/**
 * print_diagonal - prints a n diagonals to stdout
 * @n: the number of diagonals
 *
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i < n + 1; i++)
	{
		_putchar('\\');
		
		if (i != n)
		{	
			_putchar('\n');
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
