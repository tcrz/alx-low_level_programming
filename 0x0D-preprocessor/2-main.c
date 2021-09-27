#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char file[] = __FILE__;

	printf("%s\n", file);
	return (0);
}
