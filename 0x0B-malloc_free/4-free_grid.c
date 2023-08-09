#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 *
 * @grid: an array that will free
 *
 * @height: the height of array
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
