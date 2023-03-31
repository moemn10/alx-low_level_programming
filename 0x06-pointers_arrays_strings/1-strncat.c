#include "main.h"

/**
 * _strncat - function that concatenats two fun
 *
 * @dest: Pointer to first str
 * @src: Pointer to sec str
 * @n: number of character
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; i < n && n != '\O'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\O';

	return (dest);
}
