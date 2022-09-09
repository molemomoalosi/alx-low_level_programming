#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * main - prints alphatic in order
 * @alpha - stores alphabet
 * Prints alphabet in order, in lowercase
 *
 * Return: the alphabet in lowercase letters
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
