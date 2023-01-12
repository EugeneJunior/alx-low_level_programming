#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatinates all program arguments
 * @ac: number of program argument
 * @av: pointer to an array arguments
 *
 * Return: return a pointer to a newly allocated memory that contains
 * that contains the concatinated program arguments, otherwise NULL
 * if the program fails
 */

char *argstostr(int ac, char **av)
{

	char *ptr, *s;

	int i;

	ptr = malloc(sizeof(char *) * ac - 2 * ac);

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcat(ptr, strdup(av[i]));
		s = "\n";
		strcat(ptr, strdup(s));
	}

	return (ptr);

}
