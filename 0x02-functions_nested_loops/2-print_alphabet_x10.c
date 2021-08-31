#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times, followed by a new line
 *
 */



void print_alphabet_x10(void)
{
	 char x;
	 int count = 0;
	while (count < 10)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		count++;
	}



}

