#include "lists.h"

/**
 * free_list -  frees a list_t list
 *
 * @head: pointer to struct list_t
 * @str: string
*/

void free_list(list_t *head)
{
	list_t *current = head;
	while(current)
	{
		free(current->str);
		free(current);
		current = current->next;
	}
}
