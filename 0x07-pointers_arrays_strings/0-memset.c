#include "main.h"

/**
 * _memset - A C function that fills memory with a constant byte.
 *
 * @s: a pointer that will change
 *
 * @b: a character that we will fill the memory with it
 *
 * @n: the number number of bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for(i = 0; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
