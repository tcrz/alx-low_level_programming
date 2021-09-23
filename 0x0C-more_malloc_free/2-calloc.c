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
	unsigned i;

	if (!nmemb || !size)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for(i = 0; i < nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}
