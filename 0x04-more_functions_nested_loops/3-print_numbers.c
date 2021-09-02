#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9, followed by a new line.
 *
 * Return: void
 */

void print_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
}

