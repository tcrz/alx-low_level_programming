#include <stdio.h>

/**
 * main - program that prints all the arguments it receives
 * @argc: argument count
 * @argv: array of string  arguments
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
