#include <stdio.h>
#include "main.h"
/**
 * _islower - A C function that checks for lowercase character
 *
 * @c: char the will check on it
 *
 * Return: 0 if uppercase 1 if lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
}
