#include "main.h"

/**
 * swap_in - Swapping the values of two integers
 * @a: ponter to first value
 * @b: pointer to second value
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
