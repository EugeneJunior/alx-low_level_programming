#include "main.h"

/**
 * print_line - prints a line of length n to stdout
 * @n: length of line to print
 *
 */
void print_line(int n)
{
	int i;

	for (i = 1; i < n + 1; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
