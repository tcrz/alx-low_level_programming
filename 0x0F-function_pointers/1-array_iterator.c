#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of array
 * @array: int array
 * @size: size of array
 * @action: function pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	long unsigned int i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}


