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
	int i = 0;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (&(*(s + i)));
	}
	if (s[i] == '\0' && c == '\0')
		return (&s[i]);
	return (NULL);
}
