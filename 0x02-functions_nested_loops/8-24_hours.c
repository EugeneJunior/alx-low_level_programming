#include "main.h"

/**
 * jack_bauer - This record the time of jack_bauer's track
 *
 */

void jack_bauer(void)
{
	int k, m, n, o;

	n = 0;
	k = 0;
	while (n < 3)
	{
		m = 0;
		while (m < 10)
		{
			k = 0;
			while (k < 6)
			{
				for (o = 0; o < 10; o++)
				{
					if (n < 2)
					{
						_putchar(n + '0');
						_putchar(m + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(o + '0');
						_putchar('\n'); }
					else
					{
					if (m < 4)
					{
						_putchar(n + '0');
						_putchar(m + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(o + '0');
						_putchar('\n'); } }
				}
				++k;
			}
			++m;
		}
		++n;
	}
}
