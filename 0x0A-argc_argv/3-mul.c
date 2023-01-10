#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of a multiplication of two
 * command line agruments
 * @argc: number of command line arguments
 * @argv: pointer to an array of strings
 *
 * Return: returns 1 if agrc < 3 and prints and error,
 * prints 0 if program name, otherwise returns 0 (succes)
 */

int main(int argc, char *argv[])
{
	int i, j, m;

	for (i = 0; i < argc; i++)
	{
		if (argc == 3)
		{
			if (argv[i] == argv[1])
				j = atoi(argv[1]);
			else if (argv[i] == argv[2])
				m = atoi(argv[2]);

		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", j * m);
	return (0);
}
