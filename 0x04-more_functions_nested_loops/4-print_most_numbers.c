#include "main.h"

/**
 * print_most_numbers - print most of numbers with
 *		two number.
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
		_putchar(n);
	}
	_putchar('\n');
}
