#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse order
 * @s: pointer to string
 */


void print_rev(char *s)
{
	int i;

	for (i = 1; i <= (int) strlen(s); i++)
		_putchar(s[(int) strlen(s) - i]);


	_putchar('\n');



}
