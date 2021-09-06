#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a pointer to  char
 * Return: int (length of string) if successful
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		return (i);
}

