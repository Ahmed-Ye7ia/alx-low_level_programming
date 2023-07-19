#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - A C function that prints the alphabet
 *
*/

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
