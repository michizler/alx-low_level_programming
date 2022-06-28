#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created by your
 * a grid(matrix) function.
 * @grid: matrix(2 dimensional array) to be freed.
 * @height: height of the matrix.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
