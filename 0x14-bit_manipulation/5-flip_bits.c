#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to flip
 *to get from one number to another
 *@n: the first number
 *@m: the second number
 *Return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	int count = 0;

	while (xorval)
	{
		if (xorval & 1)
			count++;
		xorval = xorval >> 1;
	}

	return (count);
}
