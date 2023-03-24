#include "mian.h"

/**
 * _isupper - check if the alpha is upper or not
 *
 * @c : input for alpha
 *
 * Return: 1 if uppercase and 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
