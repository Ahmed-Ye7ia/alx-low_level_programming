#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;

	}
	putchar('\n');
	return (0);
}
