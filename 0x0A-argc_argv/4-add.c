#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the addition of positive numbers
 * @argc: number of command line arguments
 * @argv: pointer to an array of strings
 *
 * Return: returns 1 if program name and print an error,
 * otherwise returns 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, v = 0;

	for (i = 0; i < argc; i++)
	{
		v = atoi(argv[i]);
		if (i > 0)
		{
			++v;

			if (v == 1)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
}
