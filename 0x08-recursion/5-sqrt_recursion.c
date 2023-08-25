#include "main.h"

/**
 *square - a function that find square root
 *@n: the number to find square root
 *@val: number to check
 *Return: the result
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);

}

/**
 *_sqrt_recursion - a function that
 *	returns the natural square root of a number.
 *@n: the number to find square root
 *Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
