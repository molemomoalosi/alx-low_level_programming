#include "main.h"

/**
 * main - prints out putchar
 *
 * Returns: 0
 */

int main()
{
	char str [] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
