#include <stdio.h>
#include "main.h"

/**
 * print_triangle - A C function that draws a triangle
 *
 * @size: size of triangle
*/

void print_triangle(int size)
{
	int i = 0;
	int k = 1, j = 0;

	if (size > 0)
	{
		while (i <= size)
		{
			while (k <= size)
			{
				_putchar(' ');
				k++;
			}
			while (j <= i)
			{
				_putchar(35);
				j++;
			}
			i++;
			k = i + 1;
			j = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
