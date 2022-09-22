#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concetinates 2 strings
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: value of dest
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

	for (j = 0; src[j] != '\0'; j++)
	/**while (src[j] != '\0')*/
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
