#include "main.h"
#include <stdlib.h>
/**
 * _strdup - repreduce the behaviour of strdup
 * @str: the string to duplicate
 * Return: the duplicated string or NULL
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *dest;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dest = malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	if (dest != NULL)
	{
		while (str[j] != '\0')
		{
			dest[j] = str[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (dest);
}
