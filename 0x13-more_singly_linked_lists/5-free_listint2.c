#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 *
 * @head: pointer to a pointer of type listint_t
*/

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current)
	{
		free(current);
		current = current->next;
	}

}
