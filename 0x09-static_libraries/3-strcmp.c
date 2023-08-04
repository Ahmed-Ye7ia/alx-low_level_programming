/**
 * _strcmp - A C function that compare two strings.
 *
 * @s1: first string parameter
 *
 * @s2: second string parameter
 *
 * Return: it's return 0 if s1=s2
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
