#include "main.h"
/**
 * main - prints 'Holberton' followed by a new line
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char school[9] = "Holberton";
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(school[a]);
	}

	_putchar ('\n');
	return (0);
}


