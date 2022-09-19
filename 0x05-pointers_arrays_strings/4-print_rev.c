#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints reverse
 * @s: string
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int count = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (n = (count - 1); n >= 0; n--)
	{
		putchar(s[n]);
	}

		putchar('\n');
}
