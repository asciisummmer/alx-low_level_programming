#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at index
 * @head: head of list
 * @idx: index to insert node
 * @n: value to insert
 * Return: new node insert or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *prev_tmp = *head, *new_node = NULL;
	unsigned int current_index = 0;

	while (tmp != NULL)
	{
		if (current_index == idx)
		{
			new_node = malloc(sizeof(*new_node));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = tmp;
			if (current_index == 0)
			{
				*head = new_node;
			}
			else
			{
				prev_tmp->next = new_node;
			}
			return (new_node);
		}
		prev_tmp = tmp;
		tmp = tmp->next;
		current_index++;
	}
	return (NULL);
}
