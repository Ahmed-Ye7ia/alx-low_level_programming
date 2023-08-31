#include "main.h"

/**
 *print_binary -  prints the binary representation of a number.
 *@n: the number to convert to binary
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, c = 0;

	while (bit)
	{
		if (n & 1 << --bit)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}

	if (!c)
		_putchar('0');
}
