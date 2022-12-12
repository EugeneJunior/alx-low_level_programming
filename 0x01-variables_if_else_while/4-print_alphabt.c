#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	enum alphabeth
	{a, b, c, d, f, g, h, i, j, k, l, m, n, o, p, r, s, t, u, v, w, x, y, z};
	enum alphabeth lower[] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int it;
	for (it = 0; it < 24; it++)
		putchar(lower[it]);
	putchar('\n');
	return (0);

}

