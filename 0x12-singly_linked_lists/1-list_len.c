#include "lists.h"

/**
 * list_len - get number of node in single linked list
 * @h: single linked list
 *
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	size_t size_node = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		size_node++;
		temp = temp->next;
	}
	return (size_node);
}
