#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * main - prints alphatic in order
 * @letter - stores alphabet
 * @upper - stopres uppercase of alphabet
 * Prints alphabet in order, in lowercase
 *
 * Return: the alphabet in lowercase letters
 */

int main(void)
{
	char letter;
	char upper;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (upper = 'A'; letter <= 'Z'; upper++)
	{
		putchar(upper);
	}
	return (0);
}
