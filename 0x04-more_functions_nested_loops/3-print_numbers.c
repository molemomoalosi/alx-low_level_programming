#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @i - stores numbers
 *
 * Returns: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
