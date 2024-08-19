#include "lists.h"

/**
 * sum_listint - sum data of list
 * @head: head of list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum_of_data = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum_of_data += tmp->n;
		tmp = tmp->next;
	}
	return (sum_of_data);
}
