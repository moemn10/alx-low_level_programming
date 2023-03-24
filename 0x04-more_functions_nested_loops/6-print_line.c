#include "main.h"

/**
 * print_line - draw a stright line in tm
 *		acordding n count
 *
 * @n: input number for lines
 *
 * Return: Always 0 (Success)
*/

void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= n; l++)
			_putchar('_');
		_putchar('\n');
	}
}
