#include "main.h"
/**
 * alloc_grid - A C function that returns
 *	a pointer to a 2 dimensional array of integers.
 *
 * @width: the width of the array
 *
 * @height: the height of array
 *
 * Return: a pointer to the array
*/
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = malloc(height * 4);
	if (height <= 0 || width <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(4 * width);
		}
		for (i = 0 ; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
	return (ptr);

}
