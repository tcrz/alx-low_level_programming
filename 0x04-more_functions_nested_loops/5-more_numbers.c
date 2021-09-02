#include "main.h"
#include "main.h"

/**
 * more_numbers - prints 0 to 14.
 *
 */

void more_numbers(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{

			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}

			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}

