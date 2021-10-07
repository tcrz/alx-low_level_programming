#include "lists.h"


/**
 * list_len -  returns number of  elements in a linked list.
 *
 * @h: pointer of type struct list_t
 * Return: number of elements in a  linked list
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
