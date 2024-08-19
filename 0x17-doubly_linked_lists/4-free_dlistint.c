#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy = NULL;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
}
