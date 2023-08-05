#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: num of arguments
 *
 * @argv: array of arguments
 *
 * Return: always 0 if success
*/

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
