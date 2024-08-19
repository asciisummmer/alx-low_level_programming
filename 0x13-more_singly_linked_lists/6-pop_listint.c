#include "lists.h"

/**
 * pop_listint - delete head note
 * @head: head of list
 *
 * Return: data of head note
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp = NULL;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);
	return (data);
}
