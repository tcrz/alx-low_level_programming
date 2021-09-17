#include <stdio.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: argument count
 * @argv: array of string  arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (argc);
}
