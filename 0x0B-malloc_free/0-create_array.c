#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - A C program that creates an array of chars
 *
 * @size: size of char
 *
 * @c: a char that we will initialze the array with it
 *
 * Return: returns a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);
	unsigned int i;

	if (ptr != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
