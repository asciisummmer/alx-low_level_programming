#include "lists.h"

/**
 * dlistint_len - get len of list
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int size_of_list = 0;

	if (tmp == NULL)
		return (size_of_list);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		size_of_list++;
	}
	return (size_of_list);
}
