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
	int sum = 0, i;

	for (i = 1 ; i < argc ; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
