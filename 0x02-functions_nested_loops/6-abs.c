#include <stdio.h>
#include "main.h"

/**
 * _abs - prints absolute value of number
 * @n: number
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}

	return (0);
}
