#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: takes a string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	static int i;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(++s);
	}

		return (i);

}

