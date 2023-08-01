#include "main.h"

/**
 * _strchr - A C function that locates a character in a string..
 *
 * @s: a pointer that will search in it
 *
 * @c: a character that we will search with it
 *
 * Return: the pointer after change
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
