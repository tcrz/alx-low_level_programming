#include "lists.h"

/**
 * get_dnodeint_at_index- returns nth node of a linked list
 * @head: pointer of list object
 * @index: index of node to be returned
 * Return: returns node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head && (index > x))
	{
		head = head->next;
		x++;
	}
	return (head ? head : NULL);

}
