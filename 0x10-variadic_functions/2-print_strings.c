#include "variadic_functions.h"

/**
 *print_strings -  a function that prints strings.
 *@separator: string to be printed between the strings
 *@n: number of arguments
 *@...: the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);
	while (i--)
	{
		printf("%s%s", (str = va_arg(ptr, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(ptr);
}
