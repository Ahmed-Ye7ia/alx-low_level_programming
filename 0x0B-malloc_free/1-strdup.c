#include "main.h"
/**
 * _strdup - A C function that  returns a pointer to a newly allocated space
 *	in memory, which contains a copy of the string given as a parameter.
 *
 * @str: a string that we will copy.
 *
 * Return: a pointer after copy.
*/

char *_strdup(char *str)
{
	char *ptr;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}

	ptr = malloc(size + 1);

	if (ptr == NULL)
	{
		printf("%s\n", "failed to allocate memory");
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
