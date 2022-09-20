#include "main.h"

/**
 * swap_in - Swapping the values of two integers
 * @a: ponter to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
