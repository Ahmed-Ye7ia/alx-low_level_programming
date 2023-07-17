#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of three digits.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int d1 = 0, d2 = 1, d3 = 2;

	while (d1 < 8)
	{
		while (d2 <= 8)
		{
			while (d3 <= 9)
			{

				putchar(48 + d1);
				putchar(48 + d2);
				putchar(48 + d3);
				if (d1 + d2 + d3 != 24)
				{
					putchar(',');
					putchar(' ');
				}
				d3++;
			}
			d2++;
		}
		d1++;
		d2 = d1 + 1;
		d3 = d2 + 1;
	}
	putchar('\n');
	return (0);
}
