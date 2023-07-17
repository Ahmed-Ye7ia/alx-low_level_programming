#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Description:  prints all single digit numbers of base 10 starting from 0.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;

	}
	putchar('\n');
	return (0);
}
