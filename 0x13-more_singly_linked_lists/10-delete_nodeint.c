#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: head of list
 * @index: index to delete node
 *
 * Return: 1 if delete node else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL, *copy = NULL, *prev_tmp = NULL;
	unsigned int current_index = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		copy = *head;
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	tmp = *head;
	prev_tmp = tmp;
	while (tmp != NULL)
	{
		if (current_index == index)
		{
			copy = tmp;
			prev_tmp->next = tmp->next;
			free(copy);
			return (1);
		}
		prev_tmp = tmp;
		tmp = tmp->next;
		current_index++;
	}
	return (-1);
}
