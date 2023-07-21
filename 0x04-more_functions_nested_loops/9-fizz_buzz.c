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
	for (int i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
