#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: pointer to an array of integers
 * @size: size of the  array
 * @cmp: pointer to a function
 *
 * Return: returns -1 if size <= 0, -1 if interger
 *  cannot be found. otherwise returns the index of the integer
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
	}
	return (-1);
	exit(0);
}
