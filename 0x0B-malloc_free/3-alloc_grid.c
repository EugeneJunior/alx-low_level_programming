#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - pointer to two dimensional array
 * @width: width of 2 dimension array
 * @height: height of 2 dimensional array
 *
 * Return: return a pointer to 2 dim array,
 *  on failure, returns NULL; if height and width are 0,
 *  returns NULL
 */

int **alloc_grid(int width, int height)
{
	int **two_dimension, i;

	if (height == 0 || width == 0)
	{
		return (NULL);
	}

	two_dimension = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		two_dimension[i] = malloc(sizeof(int) * width);
	}


	return (two_dimension);

}
