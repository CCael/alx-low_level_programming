#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)  malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
