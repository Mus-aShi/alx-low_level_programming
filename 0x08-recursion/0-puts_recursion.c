#include "main.h"

/**
 * _puts_recursion - fumction that prints a string followed by a new line.
 * @s: input
 * return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*S);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
