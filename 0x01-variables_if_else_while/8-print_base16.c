#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase and uppercase.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char c = 'a';
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;

	}
	putchar('\n');
	return (0);
}

