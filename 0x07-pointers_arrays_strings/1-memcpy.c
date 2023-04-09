#include "main.h"
/**
 * *_memcpy - copies memory
 * @dest: memory test
 * @src: teat
 * @n: Length of src
 *
 * Return: the pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}

	return (dest)
}
