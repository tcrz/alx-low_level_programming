#include "lists.h"

/**
 * print_listint - prints all elements in a listint_t list
 * @h: pointer of type listint_t
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;


	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
