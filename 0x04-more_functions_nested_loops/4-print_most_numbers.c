/**
 * print_numbers - A C function that prints from 0 to 9
*/

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
