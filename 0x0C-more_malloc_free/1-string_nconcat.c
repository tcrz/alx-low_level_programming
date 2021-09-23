#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat -concatenates two strings.
 * @s1: string
 * @s2: string
 * @n : number of bytes of s2
 * Return: pointer to concatenated string, which contains s1, followed
 * by the first  n bytes of s2, else NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int j;
	int i, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	length = (i + n) + 1;

	concat = malloc(sizeof(char) * length);
	if (concat != NULL)
	{
		i = 0;
		j = 0;
		for (i = 0; s1[i] != '\0'; i++)
			concat[i] = s1[i];
		for (j = 0; j < n && s2[j] != '\0'; j++)
			concat[i + j] = s2[j];

		concat[i + j] = '\0';

		return (concat);
	}
	else
		return (NULL);
}

