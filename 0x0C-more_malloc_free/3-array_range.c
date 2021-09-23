#include "main.h"
#include <stdlib.h>


/**
 * array_range -contains values from min to max range.
 * @min: min int
 * @max: max int
 * Return: pointer to the newly created array else NULL
*/

int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);

}
