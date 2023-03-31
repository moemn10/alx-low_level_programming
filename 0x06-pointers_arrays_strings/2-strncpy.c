#include "main.h"

/**
 * _strncpy - copy function
 *
 * @dest: pointer to first str
 * @src: pointer to source
 * @n: lenght of addition
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
