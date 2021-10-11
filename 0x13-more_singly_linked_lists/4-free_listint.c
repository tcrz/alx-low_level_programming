#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer of type struct list_t
*/

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}

}
