#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  prints natureal  numbers from n to 98
 * @n: takes an integer
 *
 */

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
}

