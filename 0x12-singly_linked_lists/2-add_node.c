#include "lists.h"

/**
 * _strdup - copy of string
 * @str: data to copy
 *
 * Return: copy of data
 */

char *_strdup(const char *str)
{
	char *s = malloc(_strlen(str) + 1);
	int i = 0;

	if (s == NULL || str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}


/**
 * add_node - add node in head ofsingle linked list
 * @head: head single linked list
 * @str: data to store
 *
 * Return: number of node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(*node));

		if (node == NULL)
			return (NULL);
		node->str = _strdup(str);
		node->len = _strlen(str);
		node->next = *head;
		*head = node;
		return (node);
}
