#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate chr in str
 * @s: string for searchl
 * @c: character to find
 *
 * Return: pointer of first occurence if chr find. NULL otherwise.
**/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
