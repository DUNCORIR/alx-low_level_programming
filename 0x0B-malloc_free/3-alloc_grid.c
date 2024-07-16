#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Function returns pointer to 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height:height of the grid
 *
 * Return: NULL on failure and width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Looks for invalid dimensions */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* Allocate memory for rows */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	/* Allocates memory for each row and initializes to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* frees previously allocated mem on failure */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/* initializes each element to zero */
		for (j = 0; j < width; j++)
		{
		grid[i][j] = 0;
		}
	}
	return (grid);
}
