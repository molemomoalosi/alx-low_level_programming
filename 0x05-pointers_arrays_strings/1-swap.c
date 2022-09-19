#include "main.h"

/**
 * swap_int - swap integers
 * @a: first int
 * @b: 2nd int
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
