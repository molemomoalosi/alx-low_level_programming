#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Prints alphabet minus q and z
 *letter - letters to be incrimented
 *Prints alphabet minus q and z
 *
 *Incriment the alphabet from a to z and remove the letters q and z
 *Return: alphabet minus q and z
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
