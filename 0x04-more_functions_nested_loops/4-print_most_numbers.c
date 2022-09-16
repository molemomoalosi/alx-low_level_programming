#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers
 *
 * Returns: 0
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
