#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head of list
 * @idx: index to insert node
 * @n: number to insert
 *
 * Return:  address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int current_index = 0;
	dlistint_t *tmp = NULL, *new_node = NULL;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	tmp = *h;
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	while (tmp != NULL)
	{
		if (current_index == idx)
		{
			new_node->next = tmp;
			new_node->prev = tmp->prev;
			tmp->prev->next = new_node;
			tmp->prev = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		current_index++;
	}
	return (NULL);
}
