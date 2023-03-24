#include "main.h"

/**
 * _print_numbers - print number from zero to nine
 *		only using putchar
 *
 * Return: always 0 (Success)
*/

void print_numbers(void)
{
	int n;
	
	for (n = 48; n <= 57; n++)
		_putchar(n);
	_putchar('\n');
}
