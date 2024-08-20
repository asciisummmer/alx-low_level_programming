#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: index of list
 *
 * Return: 1 if delete node else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *copy = NULL;
	unsigned int current_index = 0;

	if (head == NULL)
		return (-1);
	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (current_index == index)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			copy = tmp;
			free(copy);
			return (1);
		}
		tmp = tmp->next;
		current_index++;
	}
	return (-1);
}
