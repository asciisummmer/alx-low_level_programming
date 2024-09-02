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
	int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL || ht == NULL || _strlen(key) == 0)
		return (0);
	node->key = _strdup(key);
	node->value = _strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
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
