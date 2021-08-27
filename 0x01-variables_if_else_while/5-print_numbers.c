#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints  numbers from 0 - 9
 *
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}

