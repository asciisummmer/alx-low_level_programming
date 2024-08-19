#include "lists.h"

/**
 * print_dlistint - print node of list
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int size_of_list = 0;

	if (tmp == NULL)
		return (size_of_list);
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		size_of_list++;
	}
	return (size_of_list);
}
