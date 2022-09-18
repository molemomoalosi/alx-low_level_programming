#include <stdio.h>
#include "main.h"

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = (-1 * (n % 10));
		putchar(r + '0');
		return (r);
	}
	else if (n > 0)
	{
		r = (n % 10);
		putchar(r + '0');
		return (r);
	}
	else 
	{
		putchar('0');
		return (0);
	}

	return (0);
}
