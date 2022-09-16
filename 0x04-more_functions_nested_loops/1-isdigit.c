#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks for digit
 * @c: stores variable
 *
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
