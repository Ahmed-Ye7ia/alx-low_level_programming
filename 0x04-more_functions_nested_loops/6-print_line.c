#include <stdio.h>
#include "main.h"

/**
 * print_line - A C function that draws a straight line
 *
 * @n: number of character '_'
*/

void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
