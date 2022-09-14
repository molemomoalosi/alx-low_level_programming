#include <stdio.h>
#include "main.h"

/**
 * main - prints alphabet
 *
 * Description: prints alphabet in lowercase
 * Returns: 0
 */

int print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
	return (0);
}
