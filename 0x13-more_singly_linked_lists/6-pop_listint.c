#include "lists.h"

/**
 * pop_listint - deletes head node of a lintint_t linked list
 * @head: pointer to a pointer of type struct list_t
 * Return: head node's data (n) else 0 if empty
*/

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if(!*head)
		return (data);

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;

	return (data);
}
