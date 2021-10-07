#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as parameter
 * @str: string
 * Return: pointer to duplicate array if successful else NULL
 */

char *_strdup(char *str)
{
	int i, j;
	char *copy;

	if (str != NULL)
	{

		for (i = 0; str[i] != '\0'; i++)
			;
		i = i + 1;

		copy = malloc(sizeof(char) * i);
		if (copy == NULL)
			return (NULL);

		for (j = 0; str[j] != '\0'; j++)
			copy[j] = str[j];

		return (copy);
	}
	else
		return (NULL);
}
