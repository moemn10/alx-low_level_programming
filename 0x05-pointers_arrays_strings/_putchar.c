#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on sucess 1.
 * on error, -1 is Returned, and errno is set appropriatley.
*/
int _putchar (char c)
{
	return (write(1, &c,1));
}
