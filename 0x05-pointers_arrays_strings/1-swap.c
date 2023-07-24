/**
 * swap_int - A C function that swaps the values of two integers.
 *
 * @a: first integer
 *
 * @b: second integer
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
