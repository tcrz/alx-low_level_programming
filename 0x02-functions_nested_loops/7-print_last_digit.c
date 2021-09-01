#include "main.h"

/**
 * print_last_digit - prints last digit of given integer.
 * @c: takes an number
 * Return: digit if successful
 */

int print_last_digit(int c)
{

	int digit;

	if (c < 0)
	{
		c *= -1;
	}

	digit = c % 10;
	_putchar(digit + '0');
	return (digit);
}

