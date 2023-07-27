#include "main.h"
/**
 * *_strncpy - A C funtion that copies a string
 *
 * @dest: the first string
 *
 * @src: the second string
 *
 * @n: the number of characters that will copy
 *
 * Return: it's return pointer to string after concatinate
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
