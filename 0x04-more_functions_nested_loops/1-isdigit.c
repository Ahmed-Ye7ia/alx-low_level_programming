#include <stdio.h>
#include "main.h"
/**
 * _isdigit - A C function that checks for lowercase character
 *
 * @c: char the will check on it
 *
 * Return: 0 if uppercase 1 if lowercase
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
