#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t
 * @head: pointer of type struct list_t
 * @index: unsigned int, index of node.
 * Return: nth node of a listint_t if successful else NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && (index > count))
	{
		head = head->next;
		count++;
	}

	return (head ? head : NULL);

}

