#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line
 * @n: number of times char is printed
 *
 * Return: 0
 */

void print_line(int n)
{
	char line = '_';
	int i;

	for (i = 0; i <= n; n++)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
			while ( i <= n)
			{
				putchar(line);
			}
	putchar('\n');
	}
}
