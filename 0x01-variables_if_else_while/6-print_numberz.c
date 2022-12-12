#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	enum roman_num
	{i, ii, iii, iv, v, vi, vii, viii, ix, x};
	enum roman_num numberz[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int kt;
	for (kt = 0; kt < 10; kt++)
		putchar(numberz[kt]);
	putchar('\n');
	return (0);
}

