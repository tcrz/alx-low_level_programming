#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints alphabets in reverse
 *
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num;

	for (num = 122; num >= 97; num--)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}

