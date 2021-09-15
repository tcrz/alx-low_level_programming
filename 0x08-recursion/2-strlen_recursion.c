#include "main.h"

/**
 * _strlen_recursion - concatenates two strings
 * @s: takes a string
 */

int _strlen_recursion(char *s)
{
	static int i = 0;
	if (*s != '\0')
	{
		i++;
		_strlen_recursion(++s);
	}
	else
		return (i);

}
