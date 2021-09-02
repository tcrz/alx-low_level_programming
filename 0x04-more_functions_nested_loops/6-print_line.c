#include "main.h"

/**
 * print_line - draws a straight line.
 * @n: takes int,  number of times the character _ should be printed
 *
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
		else
		_putchar('\n');
}

