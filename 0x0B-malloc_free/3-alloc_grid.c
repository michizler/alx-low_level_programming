#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * (matrix)
 * @width: number of columns
 * @height: number of rows
 * Return: Integer null matrix
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (grid);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	if (grid == NULL)
		return (grid);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
