#include "main.h"

/**
 * main - Printing alphabet in lowercase
 * Return: Always 0 (Successful)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;
	
	i = 0;
	while (i < 10; i++)
	{
		ch = 'a';

		while (ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
