#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  prints the numbers from 1 to 100
 *
 * Return: 0 always (success)
*/

int main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			i++;
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			i++;
			continue;
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
				i++;
				continue;
			}
			else
			{
				printf("Buzz ");
				i++;
				continue;
			}
		}
		printf("%d ", i);
		i++;
	}
	putchar('\n');
	return (0);
}
