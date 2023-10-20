#include "lists.h"

/**
 * _strdup -copy of string
 * @str: data to copy
 *
 * Return: copy of data
 */

char *_strdup(const char *str)
{
	char *s = malloc(_strlen(str) + 1);
	int i = 0;

	if (s == NULL || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}


/**
 * add_node_end - add node at end ofsingle linked list
 * @head: head single linked list
 * @str: data to store
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(*node));
	list_t *temp = NULL;

		if (node == NULL)
			return (NULL);
		node->str = _strdup(str);
		node->len = _strlen(str);
		node->next = NULL;
		if (*head == NULL)
		{
			*head = node;
			return (node);
		}
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
		return (node);
}
