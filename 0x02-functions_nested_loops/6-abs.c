#include "main.h"

/**
 * _abs - prints the absolute value of an integer.
 * @c: takes an number
 * Return: c if successful
 */

int _abs(int c)
{
	if (c < 0)
	{
		c *= -1;
	}

	return (c);
}

