#include "main.h"

/**
 * *_strncat - concatenate 2 strings
 * @dest: pointer to character that will be changed
 * @src: pointer to character
 * @n: counter
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	/**for (n = 0; src[n] != '\0'; n++)*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
