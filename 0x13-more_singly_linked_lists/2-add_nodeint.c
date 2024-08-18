#include "lists.h"

/**
 * add_nodeint - add node to list
 * @head: head of list
 * @n: value to add
 *
 * Return: address of new value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
