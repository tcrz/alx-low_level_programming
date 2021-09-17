#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: array of string  arguments
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if(argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);

	return (0);
}


