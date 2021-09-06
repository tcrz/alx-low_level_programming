#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 *  starting with the first character, followed by a new line.
 * @s: a pointer to  string
 */

void puts2(char *s)
{

	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (j % 2 != 1)
		{
			putchar(s[j]);
		}
	}
	putchar('\n');
}

