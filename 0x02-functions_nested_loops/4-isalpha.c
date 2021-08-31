#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: takes an alphabet or ASCII value
 * Return: 1 if successful and 0 otherwise
 */




int _isalpha(int c)
{
	int x;
	int output;

	for (x = 65; x <= 122; x++)
	{
		if ((c >= 65 && c < 91) || (c >= 97 && c <= 122))
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

