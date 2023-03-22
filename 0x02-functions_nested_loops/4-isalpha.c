#include "main.h"

/**
 *_isalpha - checks for alphabets
 *
 * @c: @c: variable to determine if input is lowercase
 *
 *Return: always 0
 */

int _isalpha(int c)
{
	int r = 0;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;

	}
	else if (c >= 'A' && c <= 'Z')
	{
		r = 1;

	}
	return (r);
}
