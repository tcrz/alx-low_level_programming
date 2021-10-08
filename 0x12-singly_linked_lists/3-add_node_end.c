#include "lists.h"

/**
 * add_node_end -  adds a new node at the end  of a list_t list
 *
 * @head: pointer to a pointer of type struct list_t
 * @str: string
 * Return: address of the new element if successful else NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node;
	list_t *current;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current = *head;
	while (current->next)
		current = current->next;

	current->next = new_node;

	return (*head);

}
