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
	int j, i = 0;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == key[j] || str[i] == key[j] + 32)
			{
				str[i] = 48 + value[j];
			}
		}
		i++;
	}
	return (str);
}
