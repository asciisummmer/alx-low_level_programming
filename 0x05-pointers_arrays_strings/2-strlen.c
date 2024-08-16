#include <stddef.h>

#include "main.h"

/**
 * _strlen - compute size of string
 * @s: string to get size
 *
 * Return: size of string
*/

int _strlen(char *s)
{
	int size = 0;

	if (s == NULL)
	{
		return (size);
	}
	for (; s[size] != '\0'; size++)
	{
	}
	return (size);
}
