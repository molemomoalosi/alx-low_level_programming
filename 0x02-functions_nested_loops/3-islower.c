#include "main.h"
#include <stdio.h>

/**
 * _islower - tests whether char is lower
 * @c: character tested
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
