#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of a listint_t linked list
 * @head: pointer of type struct list_t
 * Return: sum of all the  data (n) else 0 if empty
*/

int sum_listint(listint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}

	return (x);
}
