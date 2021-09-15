#include "main.h"

#include "main.h"

/**
 * _puts_recursion - concatenates two strings
 * @s: takes a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursrion((s + 1));
}
