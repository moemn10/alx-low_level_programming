#include <stdio.h>
#include "main.h"

/**
 * main - prints
 * @argc: number
 * @argv: arry
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
