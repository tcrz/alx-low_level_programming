#include "lists.h"

/**
 * free_list -  frees a list_t list
 *
 * @head: pointer to struct list_t
*/

void free_list(list_t *head)
{
	list_t *current = head;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);

	}
}
