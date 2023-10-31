#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - pointer to 2D array
 *@width: columns
 *@height: rows
 *Return: array
 */

int **alloc_grind(int width, int height)
{
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (int i = 0; i < heght; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
				free(grid[j])
		}
		free(grid);
		return (NULL);
	}
	for (int j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	return (grid);
}
