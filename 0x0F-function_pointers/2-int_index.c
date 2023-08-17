#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer in array.
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to compare function
 * Return: the integer indes or -1 if not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
