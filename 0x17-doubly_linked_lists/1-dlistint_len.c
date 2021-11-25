#include "lists.h"

/**
 * dlistint_len- returns number of elements in a list
 * @h: pointer to list object
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);

}

