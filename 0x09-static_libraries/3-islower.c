#include "main.h"

/**
 * _islower - returns 1 if c is lowercase and 0 if otherwise
 * @c: takes an alphabet char or ASCII number code
 * Return: 1 if successful and 0 otherwise
 */



int _islower(int c)
{
	int x;
	int output;

	for (x = 97; x <= 122; x++)
	{
		if (c >= 97 && c <= 122)
		{
			output = 1;
		}
		else
		{
			output = 0;
		}

	}
	return (output);
}

