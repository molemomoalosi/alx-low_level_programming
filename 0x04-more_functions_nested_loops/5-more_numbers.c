#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints out 0 - 14, 10 times
 * Returns: 0
 */

void more_numbers(void)
{
	int i, n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				putchar('0' +  i);
			}	
				if (i >= 10)
				{
					putchar('0' + (i / 10));
				putchar('0' + (i % 10));
				}
		}
		putchar('\n');
	}
}
