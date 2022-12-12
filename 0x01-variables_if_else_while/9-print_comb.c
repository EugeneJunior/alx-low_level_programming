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
	{a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, aa, ab, ac, ad};

	enum numbers single_digit[] = {'0', ',', ' ', '1', ',', ' ', '2', ',', ' ', '3', ',', ' ', '4', ',', ' ', '5', ',', ' ', '6', ',', ' ', '7', ',', ' ', '8', ',', ' ', '9'};

	int iter;

	for (iter = 0; iter < 30; iter++)
		putchar(single_digit[iter]);
	putchar('\n');

	return (0);

}
