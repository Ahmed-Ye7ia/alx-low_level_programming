#include "main.h"

/**
 * print_array - A C function that prints an array elements
 *
 * @a: array parameter
 *
 * @n: size of array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
