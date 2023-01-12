#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter
 * @str: pointer to string parameter
 *
 * Return: pointer to a newly allocated space in memory which
 * contains a copy of str, otherwise NULL
 */

char *_strdup(char *str)
{
	char *ptr;

	int i = strlen(str);

	ptr = malloc(sizeof(char) * i);

	ptr = strdup(str);
	if (strdup(str) == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
