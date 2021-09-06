#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @a: a pointer to an array of integers
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);

		if (x < (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
}

