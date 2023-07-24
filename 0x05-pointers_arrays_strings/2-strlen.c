/**
 * _strlen - A C function that return the length of a string.
 *
 * @s: string parameter
 *
 * Return: it's return the length of the string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0 ; *s != '\0' ; s++)
	{
		i++;
	}
	return (i);
}
