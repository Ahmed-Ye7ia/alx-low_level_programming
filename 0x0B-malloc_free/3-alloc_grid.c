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

	ptr = malloc(height * sizeof(*ptr));
	if (height <= 0 || width <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(**ptr) * width);
			if (ptr[i] == 0)
			{
				while(i--)
				{
					free(ptr[i]);
				}
				free(ptr);
				return (NULL);
			}
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
