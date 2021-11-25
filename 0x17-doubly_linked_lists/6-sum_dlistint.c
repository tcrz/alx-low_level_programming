#include "lists.h"

/**
 * sum_dlistint- returns sum of all data in a linked list
 * @head: pointer of list object
 * Return: Number of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0, total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
		i++;
	}
	return (total);

}

