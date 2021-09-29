#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: array of string arguments
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char sign;
	int (*func) (int, int);

	if (argc == 4)
        {
                num1 = atoi(argv[1]);
                num2 = atoi(argv[3]);
		func = (get_op_func(argv[2]));
		sign = *argv[2];
		result = func(num1, num2);
        }
	else
	{
		 printf("%s\n", "Error");
		 exit(98);
	}

	if (!func)
	{
		printf("%s", "Error");
		exit(99);
	}

	if ((sign ==  '/' || sign == '%') && num2 == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}

	printf("%d\n",result);

	return (0);
}
