#include "lists.h"


/**
 * insert_nodeint_at_index -  frees a listint_t list
 *
 * @head: pointer to a pointer of type listint_t
 * @idx: index of the list where new node should be added.
 * @n: data
 * Return: address of new node if successful else NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *temp;
	listint_t *new_node;
	unsigned int count = 1;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		(*head) = new_node;
		return (new_node);
	}

	while (current && idx > count)
	{
		current = current->next;
		count++;
	}

	new_node->next = current->next;
	current->next = new_node;
	/**
	*temp = current->next;
	*current->next = new_node;
	*new_node->next = temp;
	 */

	return (new_node ? new_node : NULL);

}
