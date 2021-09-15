#include "main.h"

/**
 * _pow_recursion - returns x to the power y.
 * @x: value to be evaluate.
 * @y: exponent.
 * Return: int value
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	int power = x * _pow_recursion(x, (y-1));
	return (power);
}
