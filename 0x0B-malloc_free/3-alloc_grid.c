#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *alloc_grid - pointer to 2D array
 *@width: columns
 *@height: rows
 *Return: array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
				free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	return (grid);
}
