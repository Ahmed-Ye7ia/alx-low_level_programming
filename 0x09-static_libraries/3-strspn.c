#include "main.h"
/**
 * _strspn - a c function that gets the length of a prefix substring.
 *
 * @s: the first string
 *
 * @accept: the second string
 *
 * Return: the length of a prefix substring.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
}
