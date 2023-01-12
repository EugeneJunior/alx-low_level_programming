#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - 2 dimensional grid previously
 *  created by alloc_grid function
 * @grid: 2 dimensional grid created by alloc_grid
 * @height: height of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
