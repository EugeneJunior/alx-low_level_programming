#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	enum numbers
	{a, b, c, d, f, g, h, i, j, k, l, m, n, o, p, q, r};

	enum numbers hexadecimal[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	int s;

	for (s = 0; s < 16; s++)
		putchar(hexadecimal[s]);
	putchar('\n');

	return (0);

}

