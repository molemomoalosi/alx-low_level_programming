#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concetinates 2 strings
 * @dest: string 1
 * @src: 2nd string
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
