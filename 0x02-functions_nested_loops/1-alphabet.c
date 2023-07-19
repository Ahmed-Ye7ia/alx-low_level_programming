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
 for(char a = 'a'; a <= 'z' ; a++)
 {
         putchar(a);
 }
}

int main(void)
{
	print_alphabet();  
	return (0);
}
