#include "main.h"

/**
 * _puts - A C function that prints a string
 *
 * @str: string parameter
*/

void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
