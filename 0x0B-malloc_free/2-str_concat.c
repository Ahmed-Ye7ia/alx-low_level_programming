#include "main.h"
/**
 * str_concat - A C function that concatenates two strings.
 *
 * @s1: the first string.
 *
 * @s2: the second string.
 *
 * Return: a pointer after concatinate.
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, size1, size2;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
		;
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	ptr = malloc(size1 + size2 + 1);
	if (ptr == NULL)
	{
		printf("%s\n", "failed to allocate memory");
	}
	else
	{
		for (i = 0; i <= size1 + size2; i++)
		{
			if (i < size1)
				ptr[i] = s1[i];
			else
				ptr[i] = s2[i - size1];
		}
		ptr[i] = '\0';
	}

	return (ptr);
}
