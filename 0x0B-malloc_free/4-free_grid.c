#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees 2-dimensional Array Previously created
 * @grid: Address of two dimensional grid
 * @height: height of the grid.
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
