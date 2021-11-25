#include "lists.h"

/**
 * add_dnodeint- adds a new node at beginning of list
 * @head: pointer to pointer of list object
 * @n: int
 * Return: Number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}

	(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;
	return (newnode);

}

