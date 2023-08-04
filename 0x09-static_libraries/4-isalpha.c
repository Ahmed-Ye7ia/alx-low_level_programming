#include "main.h"
/**
 * _isalpha - A C function that checks for alphabe
 *
 * @c: char the will check on it
 *
 * Return: 1 if c is letter 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
