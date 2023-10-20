#include "lists.h"

/**
 * _strdup -copy of string
 * @str: data to copy
 *
 * Return: copy of data
 */

char *_strdup(const char *str)
{
	char *s = malloc(sizeof(str));
	int i = 0;

	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}

/**
 * _strlen - size of string
 * @s: string to check
 *
 * Return: len of string
 */

int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; *(s + i); ++i)
	{

	}
	return (i);
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

