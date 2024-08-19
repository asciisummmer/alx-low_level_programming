#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node
 *
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int current_index = 0;

	while (tmp != NULL)
	{
		if (current_index == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		current_index++;
	}
	return (NULL);
}
