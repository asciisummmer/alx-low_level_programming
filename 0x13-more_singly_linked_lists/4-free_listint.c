#include "lists.h"

/**
 * free_listint - free list
 * @head: head of list
 */

void free_listint(listint_t *head)
{
	listint_t *copy = head, *tmp = NULL;

	while (copy != NULL)
	{
		tmp = copy;
		copy = copy->next;
		free(tmp);
	}
}
