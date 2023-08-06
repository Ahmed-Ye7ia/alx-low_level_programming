#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int count = 0;
	int cents = atoi(argv[1]);

	if (cents < 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		while (cents != 0)
		{
			if (cents >= 25)
			{
				cents -= 25;
				count++;
			}
			else if (cents >= 10)
			{
				cents -= 10;
				count++;
			}
			else if (cents >= 5)
			{
				cents -= 5;
				count++;
			}
			else if (cents >= 2)
			{
				cents -= 2;
				count++;
			}
			else
			{
				cents -= 1;
				count++;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
