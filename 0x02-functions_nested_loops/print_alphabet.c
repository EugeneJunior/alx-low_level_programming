#include <string.h>
#include "main.h"
/**
 * print_alphabet - This prints lower case alphabets to stdou
 *
 */

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < (int) strlen(str); i++)
		_putchar(str[i]);

	_putchar('\n');

}
