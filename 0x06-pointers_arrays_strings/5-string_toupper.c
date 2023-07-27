#include "main.h"

/**
 * string_toupper - a c function that changes lowercase letters to uppercase.
 *
 * @str: a pointer parameter to the string that will change
 *
 * Return: it wil return the string after changed
*/

char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
	}
	return (str);
}
