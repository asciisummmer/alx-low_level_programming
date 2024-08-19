#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *copy = NULL, *tmp = NULL;

	if (head == NULL)
		return;
	copy = *head;
	while (copy != NULL)
	{
		tmp = copy;
		copy = copy->next;
		free(tmp);
	}
	*head = NULL;
}
