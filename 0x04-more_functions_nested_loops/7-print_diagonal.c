#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - printdiagonal
 * @n: stores loops
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
		else
		{
			putchar('\\');
			putchar(' ');
			putchar('\n');
			n++;
		}
	}
}
