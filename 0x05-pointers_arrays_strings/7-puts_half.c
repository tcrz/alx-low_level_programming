#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @s: a pointer to a string
 */

void puts_half(char *s)
{

	int j, i;

	for (j = 0; s[j] != '\0'; j++)
		;

	if (j % 2 == 0)
	{
		for (i = j / 2; i < j; i++)
			_putchar(s[i]);
	}
	else if (j % 2 != 0)
	{
		for (i = (j - 1) / 2; i < j - 1; i++)

			putchar(s[i + 1]);
	}
	putchar('\n');
}

