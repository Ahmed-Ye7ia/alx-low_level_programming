#include <stdio.h>
#include "main.h"

/**
 * print_line - A C function that draws a straight line
 *
 * @n: number of character _
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
