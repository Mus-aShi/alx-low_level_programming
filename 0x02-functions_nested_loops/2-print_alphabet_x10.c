#include "main.h"

/**
 *print_alphabet_x10 - print alphabets in lower case
 *
 *
 *Return: always 0
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char ch;

	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');

		n++;
	}
}



