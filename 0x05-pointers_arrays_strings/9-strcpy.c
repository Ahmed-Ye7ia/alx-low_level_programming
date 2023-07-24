#include "main.h"

/**
 * *_strcpy - A C function that copies value of pointer to another
 *
 * @src: first parameter
 *
 * @dest: second parameter
 *
 * Return: the second pointer after copy
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);

}
