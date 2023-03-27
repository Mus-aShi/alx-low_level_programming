#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string to be printed
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i, swap;
	int j = strlen(s) - 1;

	while (i <= j)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
		i++;
		j--;
	}
}
