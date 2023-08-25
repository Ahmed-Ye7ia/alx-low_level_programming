#include "main.h"
#include <stdio.h>

/**
 *check_prime - check if n is prime
 *@n: the number to check if it's prime or not
 *@check: number to check with it
 *Return: 1 if primt 0 otherwise
 */
int check_prime(int n, int check)
{
	if (check >= n && n > 1)
		return (1);
	else if (n % check == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, check + 1));
}

/**
 *is_prime_number - a function that check if n is a prime number
 *@n: the number to check if it's prime or not
 *Return: 1 if n is prime 0 otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
