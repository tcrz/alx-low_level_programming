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

	if(head == NULL)
		return (NULL);

	new_node = (list_t *) malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	head = &new_node;

	printf("[%u] %s\n", new_node->len, new_node->str);
	return (new_node);

}
