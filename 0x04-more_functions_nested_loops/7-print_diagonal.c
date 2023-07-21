#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - A C function that draws a diagonal line
 *
 * @n: number of character '_'
*/

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
			j = 0;
		}
	}
	else
	{
	_putchar('\n');
	}
}
