#include "lists.h"
#include <string.h>

/**
 * add_node -  adds a new node at the start of a list
 *
 * @head: pointer to a pointer of type struct list_t
 * @str: string
 * Return: address of the new element if successful else NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	*head = new_node;

	return (*head);
}
