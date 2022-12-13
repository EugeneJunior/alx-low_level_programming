/*header files goes there */
#include <stdio.h>
#include <stdlib.h>
/* betty-style documentation for main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{/* enum alphabet - data type
 * Declares an enumerated alphabet list indexed from (0) to (-1)
 */
	enum alphabet
	(a, b, c, d, e, f, g, h, i, j, k, l, m,
	 n, o, p, q, r, s, t, u, v, w, x, y, z};

	enum alphabet lower[] = {
					'a',
					'b',
					'c',
					'd',
					'e',
					'f',
					'g',
					'h',
					'i',
					'j',
					'k',
					'l',
					'm',
					'n',
					'o',
					'p',
					'q',
					'r',
					's',
					't';
					'u',
					'v',
					'w',
					'x',
					'y',
					'z'
						};

	for (int it = 0; it < 26; it++)
		putchar(lower[it]);

	putchar('\n');

	return (0);
}

