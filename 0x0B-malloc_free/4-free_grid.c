#include "main.h"
#include <stdlib.h>
/**
 * free_grid - ftrees the grid created by alloc_grid
 * @grid: pointer to grid
 * @height: value for grid height
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0 ; x < height ; x++)
		free(grid[x]);
	free(grid);
}
