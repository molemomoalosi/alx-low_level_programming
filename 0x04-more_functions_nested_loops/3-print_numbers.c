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
	char i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');
}
