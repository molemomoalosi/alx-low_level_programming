#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - determines whether a number is positive or negative
 * @n - the number to be checked
 *
 * Determines number is + or - based on whether its larger or smaller than zero
 *
 * Return: is positive if above zero, else return negative
 */

int main(void)
{
int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
