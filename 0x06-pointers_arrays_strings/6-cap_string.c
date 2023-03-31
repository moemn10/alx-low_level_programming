#include "main.h"
#include <stdio.h>

/**
 * isLower - deter whether ascii
 * @c: char
 * Return: 1 if true, 0 if false
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - deter whether ascii de
 * @c: char
 * Return: 1 if true, 0 of false
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimtier[i])
			return (i);
	return (0);
}

/**
 * cap_string - captilize
 * @s: input
 *
 * Return: str with wi
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);

}
