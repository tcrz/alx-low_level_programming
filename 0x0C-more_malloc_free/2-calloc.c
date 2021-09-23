#include "main.h"
#include <stdlib.h>


/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory else NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (!nmemb || !size)
		return (NULL);

	mem = malloc(nmemb * sizeof(size));
	if (mem == NULL)
		return (NULL);

	return (mem);
}
