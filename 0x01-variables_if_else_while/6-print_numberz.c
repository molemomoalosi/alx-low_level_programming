#define _UCG_SOURCE
#include <stdio.h>
#include <time.h>

/**
 * main - prints single digits
 *
 * Prints single digits of base 10
 * Return: single digits from 0 to 9
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
