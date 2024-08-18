#include "lists.h"

/**
 * listint_len - get size of list
 * @h: list
 *
 * Return: size of list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	int list_lenght = 0;

	while (tmp != NULL)
	{
		list_lenght++;
		tmp = tmp->next;
	}
	return (list_lenght);
}
