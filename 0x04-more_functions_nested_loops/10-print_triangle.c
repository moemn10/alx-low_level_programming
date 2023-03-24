#include "main.h"

/**
 * print_triangle - give us a triangle
 *
 * @size: input value
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int r, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				if ((r + c) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
