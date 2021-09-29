#include "function_pointers.h"

/**
 * int_index - executes a function on each element of array
 * @array: int array
 * @size: size of array
 * @cmp: function pointer
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
