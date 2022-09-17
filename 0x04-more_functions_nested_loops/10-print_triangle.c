#include "main.h"
#include <stdio.h>

/**
 * print_traingle - prints triangle]
 * Returns: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{

		for (int = 1; 1 <= size; i++)
		{
			for (j = 1; j < size; j++)
			{
				putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}

			putchar('n');
		}
	}
}
