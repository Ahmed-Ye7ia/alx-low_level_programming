#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - A C function that prints 10 times the alphabet
 *
*/

void print_alphabet_x10(void)
{
	int a = 'a';
	int c = 0;

	while (c < 10)
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
	}
}
