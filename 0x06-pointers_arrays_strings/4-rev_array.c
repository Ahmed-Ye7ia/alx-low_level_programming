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
	int i, j = 0, t;

	for (i = n - 1 ; j < i; i--)
	{
		t = a[j];
		a[j] = a[i];
		a[i] = t;
		j++;
	}
}
