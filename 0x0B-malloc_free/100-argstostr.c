#include "main.h"
/**
 * _strlen - a c function that find a length of string
 *
 * @s: string
 *
 * Return:the length
*/

int _strlen(char *s)
{
	int size = 0;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * argstostr - A C function that concatenates all the arguments of a program.
 *
 * @ac: number of arguments
 *
 * @av: array the contain a value of arguments
 *
 * Return: return a pointer to a new string or null if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, size, j, cmpt = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++, size++)
		size += _strlen(av[i]);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
		{
			ptr[cmpt] = av[i][j];
		}
		ptr[cmpt] = '\n';
		cmpt++;
	}
	ptr[cmpt] = '\0';
	return (ptr);


}
