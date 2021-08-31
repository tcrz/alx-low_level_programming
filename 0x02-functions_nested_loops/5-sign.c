#include "main.h"

/**
 * print_sign - prints the  sign of a number. positive, negative or zero
 * @c: takes an number
 * Return: 1 if successful and 0 otherwise
 */

int print_sign(int c)
{

	int output;

	if (c > 0)
	{
		_putchar('+');
		output = 1;
	}
	if (c == 0)
	{
		_putchar('0');
		output = 0;
	}
	if (c < 0)
	{
		_putchar('-');
		output = -1;
	}

	return (output);
}
