#include "main.h"

/**
 * leet - a c function that encodes a string into 1337..
 *
 * @str: a pointer parameter to the string that will change
 *
 * Return: it wil return the string after changed
*/

char *leet(char *str)
{
	int j;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};

	while (*str)
	{
		for (j = 0; j < sizeof(key) / sizeof(char); j++)
		{
			if (*str == key[j] || *str == key[j] + 32)
			{
				*str = 48 + value[j];
			}
		}
		str++;
	}
	return (str);
}
