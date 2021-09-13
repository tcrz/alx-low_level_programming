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
	int x;

	for (x = 0; x < n && src[x] != 0; x++)
	dest[x] = src[x];

	while (x != n)
	{
		dest[x] = '\0';
		x++;
	}
}
