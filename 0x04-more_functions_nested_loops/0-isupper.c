#include <stdio.h>
#include "main.h"
/**
 * _islower - A C function that checks for uppercase character
 *
 * @c: char the will check on it
 *
 * Return: 0 if uppercase 1 if lowercase
*/

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
