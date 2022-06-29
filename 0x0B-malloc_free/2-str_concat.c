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

/**
* str_concat - concat two strings
* @s1: string to concat
* @s2: string to concat
* Return: new string of s1+s2
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int size = _strlen(s1) + _strlen(s2);
	unsigned int j, i = 0;
	char *array_str = NULL;

	if (size == 0)
	{
		array_str = malloc(1);
		return (array_str);
	}
	array_str = malloc((sizeof(char) * size) + 1);
	if (array_str == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
	{
		array_str[i] = s1[i];
	}
	for (j = 0; s2 != NULL && s2[j] != '\0'; j++, i++)
	{
		array_str[i] = s2[j];
	}
	array_str[size] = '\0';
	return (array_str);

}
