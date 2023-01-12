#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char type used to initiallize the array
 *
 * Return: Null if size is 0, null if array fails,
 *  otherwise returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array;

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}

	return (array);
}
