#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *free_grid- gets users input
 *@grid: stores first int
 *@height: stores second input
 *Return: results
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

