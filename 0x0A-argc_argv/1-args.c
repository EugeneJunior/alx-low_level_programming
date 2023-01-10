#include "main.h"

/**
 * main - prints the number of arguments passed to it 
 * @argc: number of command line arguments
 * @argv: pointer to an array of strings
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j;

	j = -1;
	for (i = 0; argv[i]; i++)
	{
		if (i < argc)
			++j;
	}
	_putchar(j + '0');
	_putchar('\n');
	return (0);
}
