#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints alphabets with the exception of e and q
 *
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		putchar(x);
	}

	putchar('\n');
	return (0);
}

