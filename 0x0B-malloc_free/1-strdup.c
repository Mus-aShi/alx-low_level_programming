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

	i = 0;
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dest = malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		dest[j] = str[j];
	}
		dest[j] = '\0';
	return (dest);
}
