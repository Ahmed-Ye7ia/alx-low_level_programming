#include "main.h"

/**
 * _puts - A C function that prints a string
 *
 * @str: string parameter
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
