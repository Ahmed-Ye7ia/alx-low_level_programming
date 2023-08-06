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
	int sum = 0, i, num;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			num = (int)(argv[i]);
			if (num >= 48 && num <= 57)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	return (0);
}
