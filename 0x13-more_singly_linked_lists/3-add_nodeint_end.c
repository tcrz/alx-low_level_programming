#include "lists.h"

/**
 * add_nodeint_end -  add a new node at the end of a lintint_t list
 * @head: pointer to a pointer of type struct list_t
 * @n: int element
 * Return: address of new element if successful else NULL
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		current_node = *head;
		while (current_node->next)
			current_node = current_node->next;

		current_node->next = new_node;
	}

	return (*head);
}
