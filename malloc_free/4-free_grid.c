#include "main.h"
#include <stdlib.h>

/*
 * File: source_4-file.c
 * Author: Muhannad Gsgs
 */

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The address of the two-dimensional grid.
 * @height: The height of the grid (number of rows).
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
