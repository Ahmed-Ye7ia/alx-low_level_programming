#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: numbers of commands
 *
 * @argv: pointer to array of char which contain the commands
 *
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int count = 0, i;
	int cents = atoi(argv[1]);
	int money[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (cents >= money[i])
		{
			count += cents / money[i];
			cents %= money[i];
			if (cents % money[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", count);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
