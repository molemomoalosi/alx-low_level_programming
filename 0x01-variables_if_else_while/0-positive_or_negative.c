#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */

int main(void)
{
int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i", n);
	}
	else if (n == 0)
	{
		printf("%i", n);
	}
	else if (n < 0)
	{
		printf("%i", n);
	}
	return (0);
}
