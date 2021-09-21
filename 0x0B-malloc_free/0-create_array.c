#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - fill a block of memory with a specific value
 *@size: number of bytes to be allocated in memory
 *@c: char to initialise array with
 *
 *Return: pointer to array if successful else NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;

	if (size > 0)
	{
		array = malloc(sizeof(unsigned int) * size);
		if (array == NULL)
			return (NULL);

		while (i < size)
		{
			array[i] = c;
			i++;
		}
		return (array);
	}
	else
		return (NULL);


}
