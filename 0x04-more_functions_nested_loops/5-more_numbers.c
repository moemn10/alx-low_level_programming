#include "main.h"

/**
 * more_numbers - that print numbers 0 - 14
 *		ten times in row
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int n, row, count;

	for (row = 0; row  <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			n = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				n = count % 10;
			}
			_putchar(n + 48);

		}
		_putchar('\n');
	}
}
