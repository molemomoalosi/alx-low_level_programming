#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if char is alphabet
 *
 * Return: 0
 */

int _isalpha(int c)
{
	/*for (c = 'a'; c <= 'z'; c++)
	{
		return (1);
	}
	*/

	if (_isalpha(c) == 1)
	{
		return (1);
	}
	else if (_isalpha(c) == 0)
	{
		return (0);
	}

	return (0);
}
