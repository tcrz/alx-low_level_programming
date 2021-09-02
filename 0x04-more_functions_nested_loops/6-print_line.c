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
		for (a = 0; a <= n; a++)
		{
			putchar('_');
		}
		putchar('\n');
	}
		else
		putchar('\n');
}

