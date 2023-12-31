#include "main.h"

/**
 *array_range - a function that creates an array of integers.
 *@min: minimum range of values
 *@max: maximum range of values
 *Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
