#include "main.h"
/**
 * *_strcat - A C funtion that appends the src string to the dest string
 *
 * @dest: the first string
 *
 * @src: the second string
 *
 * Return: it's return pointer to string after concatinate
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
