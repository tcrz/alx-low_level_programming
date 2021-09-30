#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: integer
 * @...: variables
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	return (sum);
}
