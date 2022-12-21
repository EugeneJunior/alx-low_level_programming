#include <string.h>
#include "main.h"
/**
 * print_alphabet_x10 - This prints lower case alphabets ten time to stdout
 */

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	int j = 0;

	int i;

	while (j < 10)
	{

		++j;

		for (i = 0; i < (int) strlen(str); i++)
			_putchar(str[i]);

		_putchar('\n');
	}

}
