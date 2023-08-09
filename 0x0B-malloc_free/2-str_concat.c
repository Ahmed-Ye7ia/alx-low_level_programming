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
	int i, size1, size2, j, k = 0;

	if (s1 == NULL)
	{
		size1 = 0;
	}
	else
	{
		for (size1 = 0; s1[size1] != '\0'; size1++)
		{
			;
		}
	}
	if (s2 == NULL)
	{
		size2 = 0;
	}
	else
	{
		for (size2 = 0; s1[size2] != '\0'; size2++)
			;
	}
	ptr = malloc(size1 + size2 + 1);
	if (ptr == NULL)
	{
		printf("%s\n", "failed to allocate memory");
	}
	else
	{
		for (i = 0; i <= size1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = i; j <= size1 + size2; j++)
		{
			ptr[j] = s2[k];
			k++;
		}
	}
	return (ptr);
}
