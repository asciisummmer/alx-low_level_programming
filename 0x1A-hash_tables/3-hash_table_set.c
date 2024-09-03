#include "hash_tables.h"

/**
 * hash_table_set - set hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if operation is doing else 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || _strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		node->key = _strdup(key);
		node->value = _strdup(value);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	else
	{
		if (check_key_update(ht->array[index], key, value))
		{
			free(node);
			return (1);
		}
		else
		{
			node->key = _strdup(key);
			node->value = _strdup(value);
			node->next = ht->array[index];
			ht->array[index] = node;
			return (1);
		}
	}
}

/**
 * check_key_update - update key if exist
 * @head: head of linked list
 * @key: key to check in linked list
 * @value: value of key
 *
 * Return: 0 if key doesn't exist else 1
 */

int check_key_update(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *tmp = head;

	while (tmp != NULL)
	{
		if (_strcmp(tmp->key, key) == 0)
		{
			/*free(tmp->value);*/
			tmp->value = _strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
/**
 * _strdup - dup string
 * @str: str to dup
 *
 * Return: address to new copy
*/

char *_strdup(const char *str)
{
	int i = 0;
	char *copy = NULL;

	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
	{}
	copy = malloc(sizeof(char) * i + 1);
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}

/**
 * _strlen - len of string
 * @str: string
 *
 * Return: len of string
*/

int _strlen(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	for (; str[i] != '\0'; i++)
	{}
	return (i);
}

/**
 * _strcmp - dup string
 * @str1: string one to compare
 * @str2: string two to compare
 *
 * Return: difference betwen character of two string
*/

int _strcmp(const char *str1, const char *str2)
{
	int i = 0;

	for (; str1[i] != '\0'; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}
