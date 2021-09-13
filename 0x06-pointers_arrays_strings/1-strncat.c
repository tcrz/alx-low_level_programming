#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: Destination string
 * @src: String to be added
 * @n: number of bytes to add (or array elements)
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	;

	j = 0;
	while (n > j && src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}

	return (dest);
}
