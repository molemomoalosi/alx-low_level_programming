#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	int i, len, temp;
	len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[1] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
