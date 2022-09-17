#include <stdio.h>

/**
 * main - prints output based on nu
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char fizz[4] = "Fizz";
	char buzz[4] = "Buzz";
	char fb[8] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		/*
		 * if ((i % 3 != 0) || (i % 5 != 5))
		 * {
		 *	printf("%i ", i);
		 * }
		 */

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fb);
		}

		else if (i % 3 == 0)
		{
			printf("%s ", fizz);
		}

		else if (i % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else if ((i % 3 != 0 && i % 5 != 0))
		{
			printf("%i ", i);
		}

	}

	return (0);
}
