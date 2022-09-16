#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks whether letter is uppercase
 * @c: stores character to be tested
 *
 * Return: 1 if upper, else 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	/*return (_isupper(c));*/
}
