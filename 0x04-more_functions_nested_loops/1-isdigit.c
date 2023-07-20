#include <stdio.h>
#include "main.h"
/**
 * _isdigit - A C function that checks for digit
 *
 * @c: char the will check on it
 *
 * Return: 1 if digit 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
