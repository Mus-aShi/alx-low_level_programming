#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabets 10 times
 *
 * Return: Always 0.
 */




void print_alphabet_x10(void)
{
	int n = 10;
	char ch;

	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		n++;
		_putchar('\n');

	}
}
