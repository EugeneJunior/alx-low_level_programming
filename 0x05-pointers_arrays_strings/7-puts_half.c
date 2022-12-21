#include "main.h"
#include <string.h>
/**
 * puts_half - prunts half of a string followed by a newline
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int i;

	if (((int) strlen(str)) / 2 % 2 == 0)
	{
		for (i = ((int) strlen(str)) / 2 + 1; i < (int) strlen(str); i++)
		{
			_putchar(str[i]);

		}
		_putchar('\n');

	}
	else
	{
		for (i = ((int) strlen(str) - 1) / 2; i < (int) strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
