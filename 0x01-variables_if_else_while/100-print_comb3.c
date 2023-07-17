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
	int d1 = 0, d2 = 1;

	while (d1 < 9)
	{
		while (d2 <= 9)
		{
			putchar(48 + d1);
			putchar(48 + d2);
			if (!(d1 == 8 && d2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
			d2++;
		}
		d1++;
		d2 = d1 + 1;
	}
	putchar('\n');
	return (0);
}
