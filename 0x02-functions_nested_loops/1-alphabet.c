#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: A C program that prints the alphabet
 *
 * Return: always 0 (success)
*/

void print_alphabet(void)
{	
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
}
