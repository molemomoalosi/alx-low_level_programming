#define _UCG_SOURCE
#include <stdio.h>
#include <time.h>

/**
 * main - reverses alphabet
 * letter - stores letters
 *
 * This function reverses the alphabet from z to a
 * Return: the alphabet from z to a
 */


int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);

	}

	putchar('\n');
	return (0);
}

