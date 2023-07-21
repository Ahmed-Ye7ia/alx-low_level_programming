#include <stdio.h>
#include "main.h"

/**
 * more_numbers - A C function that prints 10 times from 0 to 14
*/

void more_numbers(void)
{
	int i, num, count;

	for (i = 0; i <= 9; i++)
	{
		for (count = 0; count < 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;

			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
