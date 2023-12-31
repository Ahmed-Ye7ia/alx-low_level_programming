#include "function_pointers.h"
/**
 * array_iterator -  a function that
 *	executes a function given as a parameter on each element of an array.
 *
 * @array: the array
 * @size: size of array
 * @action: a pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size;

	if (array && size && action)
	{
		while (array < end)
		{
			action(*array);
			array++;
		}
	}
}
