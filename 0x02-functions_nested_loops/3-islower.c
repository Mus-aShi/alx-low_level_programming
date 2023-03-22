#include "main.h"

/**
 *_islower - checks for lower case char
 *@c: variable to determine if input is lowercase
 *
 *Return: always 0
 *
 */
int _islower(int c)
{
	int r = 0;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	return (r);
}

