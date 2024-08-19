#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 * @head: head of list
 * @n: value to add
 *
 * Return: new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tmp = NULL;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
