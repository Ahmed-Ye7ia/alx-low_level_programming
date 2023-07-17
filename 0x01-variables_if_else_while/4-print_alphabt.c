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
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
		}
		putchar(c);
		c++;

	}
	putchar('\n');
	return (0);
}
