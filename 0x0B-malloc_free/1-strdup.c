#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as parameter
 * @str: number of bytes to be allocated in memory
 * Return: pointer to duplicate array if successful else NULL
 */

char *_strdup(char *str)
{
	int i, j;
	char *copy;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (str != NULL)
	{
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
