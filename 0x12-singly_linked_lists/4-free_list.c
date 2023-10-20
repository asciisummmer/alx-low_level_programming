#include "lists.h"

/**
 * free_list - add node at end ofsingle linked list
 * @head: head single linked list
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
