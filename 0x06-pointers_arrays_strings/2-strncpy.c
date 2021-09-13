#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination of copied string
* @src: source of string
* @n: number of bytes
* Return: pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i > n && src[i] != '\0'; i++)
	dest[i] = src[i];

	if (i != n)
	dest[i] = '\0';

	return (dest);
}
