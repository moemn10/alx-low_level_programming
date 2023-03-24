#include "main.h"

/**
 * print_diagonal - print slash in lines
 *
 * @n: input value
 * Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int l, e;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (e = 1; e <= n; e++)
		{
			for (l = 1; l <= e; l++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');

		}
	}
	_putchar('\n');
}
