#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees 2d array grid
 * previously created by your alloc_grid function
 * @grid: grid
 * @height: dimension of grid
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
