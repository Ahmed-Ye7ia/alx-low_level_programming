#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at given index
 *@n: pointer to number
 *@index: index to change bit to 0
 *Return: 1 if it works, -1 if there's an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int check = 1;
	unsigned int bit = sizeof(n) * 8;

	if (index > bit)
		return (-1);

	check = check << index;

	*n = *n & ~(check);

	return (1);

}
