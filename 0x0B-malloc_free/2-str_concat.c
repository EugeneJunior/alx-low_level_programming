#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to a newly allocated
 * memory containing the content of s1 followed by s2
 * and NULL terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *str_cat;

	int i, j, l;

	i = strlen(s1);
	j = strlen(s2);

	str_cat = malloc(sizeof(char) * (j + i - 1));

	str_cat = strdup(s1);

	for (l = 0; l < j && s2[l] != '\0'; ++l)
	{
		str_cat[i + l] = s2[l];
	}
	str_cat[i + l] = '\0';

	return (str_cat);
}
