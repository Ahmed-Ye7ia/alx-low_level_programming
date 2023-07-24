#include "main.h"
/**
 * puts_half - A C function that prints half of a string
 *
 * @str: string parameter
*/

void puts_half(char *str)
{
	int l, i;

	for (l = 0 ; str[l] != '\0' ; ++l)
	{
		;
	}
	
	for (i = l / 2; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
