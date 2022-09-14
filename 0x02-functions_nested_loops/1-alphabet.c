#include "main.h"
/**
 * main - Printing alphabets in lowercase,
 * followed by new line
 * Return: ALways 0 (Successful)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
}
