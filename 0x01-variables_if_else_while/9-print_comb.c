#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints possible combinations of
 * single-digit numbers
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(32);
		}

	}
	putchar('\n');
	return (0);
}

