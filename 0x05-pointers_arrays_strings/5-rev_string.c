#include "main.h"

/**
 * rev_string - a c function the reverse a string
 *
 * @s: string parameter
*/

void rev_string(char *s)
{
	int l = 0, i, j;
	char temp;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
