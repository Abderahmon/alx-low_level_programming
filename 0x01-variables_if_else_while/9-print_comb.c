#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar((n % 10) + '0');
		if (n != 57);
		{

		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
		return (0);
}
