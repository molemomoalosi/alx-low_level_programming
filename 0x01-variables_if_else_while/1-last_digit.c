#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * main - finds last number and how big it is
 * @n: the number to be used
 * @lastDigit: the last digit of n
 *
 * Finds if n is larger or smaller than five
 *
 * Return: If n > five, return is larger than five else return is less than
 */

int main(void)
{
int n;
int lastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 5 && lastDigit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);

}
