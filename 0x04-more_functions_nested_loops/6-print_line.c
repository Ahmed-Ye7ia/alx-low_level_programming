#include <stdio.h>
#include "main.h"

/**
 * print_line - A C function that draws a straight line
 *
 * @n: number of character _
*/

void print_line(int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
