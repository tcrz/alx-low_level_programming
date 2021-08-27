#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main -  print the last digit of the number
 * stored in the variable n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;

	if (lastnum > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	else if (lastnum == 0)
	printf("Last digit of %d is %d and is 0\n", n, lastnum);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);

	return (0);
}

