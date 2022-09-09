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

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}

