#include "main.h"

/**
 * rev_string - a c function the reverse a string
 *
 * @s: string parameter
*/

void rev_string(char *s)
{
	int l = 0, i;
	char temp;

	for (l = 0 ; s[l] != '\0' ; ++l)
	{
		;
	}

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
