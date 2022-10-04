#include "main.h"

/**
 * free_grid - frees grid allocated memory
 * @grid: grid to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
