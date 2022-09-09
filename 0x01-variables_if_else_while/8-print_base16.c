#define _UCG_SOURCE
#include <stdio.h>
#include <time.h>

/**
 * main - prints numbers to the base of 16
 *
 * Prints numbers and letter to the base of 16
 * Return: return the numbers as well as letters
 */

int main(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
		putchar(i);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
