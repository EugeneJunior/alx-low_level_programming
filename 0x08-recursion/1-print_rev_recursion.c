#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to reverse
 */

void _print_rev_recursion(char *s)
{
	int len, i;
	char *t = s;

	len = strlen(t);

	for (i = len - 1; *(t + i) != '\0'; i--)
	{
		_putchar(*(t + i));
	}
	*(t + len) = '\0';

}
