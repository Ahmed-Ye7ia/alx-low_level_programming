#include "main.h"
/**
 * *_strcat - A C funtion that appends the src string to the dest string
 *
 * @dest: the first string
 *
 * @src: the second string
 *
 * @n: the maximum number of characters will concatinate
 *
 * Return: it's return pointer to string after concatinate
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j  0; j < n; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
