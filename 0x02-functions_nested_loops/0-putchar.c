#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "putchar";
	int ch;

	for (ch = 0; ch < 8; ch++;)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);

}
