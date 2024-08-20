#include "lists.h"

/**
 * sum_dlistint - sum data of list
 * @head: head of list
 *
 * Return: sum of data list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_of_data = 0;

	while (head != NULL)
	{
		sum_of_data += head->n;
		head = head->next;
	}
	return (sum_of_data);
}
