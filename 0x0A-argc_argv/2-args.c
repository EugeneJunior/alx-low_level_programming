#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the command line arguments 
 * @argc: th number of the command line arguments
 * @argv: an array of stringes
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	return (0);
}
