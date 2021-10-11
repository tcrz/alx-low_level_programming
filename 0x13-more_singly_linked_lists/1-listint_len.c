#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: pointer of type listint_t
 * Return: number of elements in a listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
