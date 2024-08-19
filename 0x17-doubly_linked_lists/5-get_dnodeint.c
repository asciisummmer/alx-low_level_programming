#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node
 *
 * Return: node at index or null
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int current_index = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp != NULL)
	{
		if (current_index == index)
			return (tmp);
		tmp = tmp->next;
		current_index++;
	}
	return (NULL);
}
