#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/* free_grid - Frees 2 dimensional grid previously created by alloc_grid
 * @grid: Pointer to 2D grid of integers.
 * @height: Height of grid,number of rows
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	/* Free each row */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/* free t`he grid */
	free(grid);
}
