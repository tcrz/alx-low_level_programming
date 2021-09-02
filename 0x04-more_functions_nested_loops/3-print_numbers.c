#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9, followed by a new line.
 *
 *
 */

void print_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}

