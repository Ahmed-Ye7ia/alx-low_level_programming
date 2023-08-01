#include "main.h"

/**
 * _memcpy - A C function that copies memory area.
 *
 * @dest: the first pointer
 *
 * @src: the second pointer
 *
 * @n: the number number of bytes
 *
 * Return: the pointer after change
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
