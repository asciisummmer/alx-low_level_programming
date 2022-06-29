#include "main.h"

/**
* _strlen - return size of string
* @str: string to get lenght
* Return: size of string
*/

unsigned int _strlen(char *str)
{
	unsigned int size = 0;

	if (str == NULL || str[0] == '\0')
		return (0);
	while (*str)
	{
		size++;
		str++;
	}
	return (size);
}

/**
* _strdup - alloc and copy string in another array
* @str: string to dup
* Return: address memory of string
*/

char *_strdup(char *str)
{
	unsigned int size = _strlen(str);
	char *array_str = NULL;
	unsigned int i = 0;

	if (str == NULL)
	{
		array_str = malloc(1);
		return (array_str);
	}
	if (size == 0)
		return (NULL);
	array_str = malloc((sizeof(char) * size) + 1);
	if (array_str == NULL)
		return (NULL);
	array_str[size] = '\0';
	for (i = 0; i < size; i++)
		array_str[i] = str[i];
	return (array_str);
}
