#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * @...: variables
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			separator = "";

		if (i != n - 1)
		printf("%d%s", va_arg(ptr, int), separator);
		else
		printf("%d", va_arg(ptr, int));
	}
	printf("\n");
}
