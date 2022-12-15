#include "main.h"
#include <string.h>

/**
 * print_last_digit - prints the last
 * digit imput number to stdout
 * @n: input parameter
 *
 *
 * Return: return last digit of input number
 */

int print_last_digit(int n)
{
	int i;

	char str[] = "0123456789";

	for (i = 0; i < (int) strlen(str); i++)
		if ((n % 10) == (int) str[i])
			_putchar(str[i]);	

	return ((n % 10));

}
