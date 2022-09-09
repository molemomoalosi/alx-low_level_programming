#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - prints alphatic in order
 * @letter - stores alphabet
 *
 * Prints alphabet in order, in lowercase
 * Return: the alphabet in lowercase letters
 */

int main(void)
{	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
