#include "main.h"
#include <string.h>

/**
 * print_rev - print reversed string
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
