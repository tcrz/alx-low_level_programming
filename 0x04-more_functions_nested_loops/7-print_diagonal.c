#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 * @n: takes int,  number of times the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	int c;

	for (c = 1; c <= n; c++)
		_putchar('\\');
	_putchar('\n');
}
