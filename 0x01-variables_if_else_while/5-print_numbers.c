#define _GCU_SCOURCE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints single digits
 * i - number
 *
 * prints single digits less than ten
 *
 * Return: 0123456789
 */

int main(void)
{
	int i;

	while (i >= 10)
	{
		printf("%d", i);
		i++;
	}
	return (0);
}

