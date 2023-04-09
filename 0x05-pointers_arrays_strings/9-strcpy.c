#include "main.h"

/**
 * _strcpy - copies
 * @dest: char type string
 * @src: char type
 * Description: copy the string
 * Return: pointer to "dest"
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0');

	return (dest);
}
