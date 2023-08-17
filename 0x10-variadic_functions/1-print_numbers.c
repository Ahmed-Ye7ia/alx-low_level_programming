#include "variadic_functions.h"
/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator:  the string to be printed between numbers
 * @n: number of numbers
 * @...: the numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i == n - 1)
		{
			printf("%s ", separator);
		}
		else
		{
			_putchar('\n');
		}
	}
	va_end(ptr);
}
