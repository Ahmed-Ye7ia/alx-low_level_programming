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
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
