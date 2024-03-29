#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - for freeing array
 * @grid: 2nd grid
 * @height: height measurement for grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

