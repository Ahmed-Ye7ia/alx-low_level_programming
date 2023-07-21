/**
 * print_most_numbers - A C function that prints from 0 to 9 except 2 and 4
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(48 + i);
	}
	_putchar('\n');
}
