#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints hexadecimals in lowercase
 *
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 48; a <= 122; a++)
	{

		if ((a < 58 || a >= 97) && a <= 102)
		{
			putchar(a);
		}

	}

	putchar('\n');
	return (0);
}

