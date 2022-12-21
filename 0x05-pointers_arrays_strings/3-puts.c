#include "main.h"
#include <string.h>

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string
 */


void _puts(char *str)
{
	int i;

	for (i = 0; i < (int) strlen(str); i++)
		_putchar(str[i]);

	_putchar('\n');

}
