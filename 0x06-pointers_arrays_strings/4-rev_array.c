#include "main.h"

/**
 * reverse_array - A C funtion that reverse the content of array
 *
 * @a: the array parameter
 *
 * @n: number of contents in array
*/

void reverse_array(int *a, int n)
{
	int i, j = 0;

	for (i = n - 1 ; i >= 0; i--)
	{
		a[j] = a[i];
		j++;
	}
}
