#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - checks whether letter is uppercase
 *
 * Return: 1 if upper, else 0
 */

int _isupper(int c)
{
	if (_isupper(c) == 1)
	{
		putchar(c);
		return (0);
	}
	else
	{
		putchar(c);
		return (1);
	}

	return (_isupper(c));
}
