#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - prints  alphabets in lowercase followed by
 * a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar (az);
	}
	putchar('\n');
	return (0);
}

