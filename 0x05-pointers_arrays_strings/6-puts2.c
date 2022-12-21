#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character of a string followed by a new ling
 * @str: pointer to string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (int) strlen(str); i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');


}
