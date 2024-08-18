#include "lists.h"

/**
 * print_listint - print all element of list
 * @h: list
 *
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	int number_of_nodes = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		number_of_nodes++;
		tmp = tmp->next;
	}
	return (number_of_nodes);
}
