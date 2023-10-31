#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenate 2 strings
 *@s1: the 1st string
 *@s2: the 2nd string
 *Return: string1 + string2
 */

char *str_concat(char *s1, char *s2)
{
	char *set;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	set = malloc((i + j + 1) * sizeof(char));

	if (set == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		set[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		set[i] = s2[j];
		i++;
		j++;
	}
	set[i] = '\0';
	return (set);
}
