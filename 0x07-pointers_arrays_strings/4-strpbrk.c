#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strpbrk - find first occurence of s in accept
 * @s: string for search
 * @accept: character to find
 *
 * Return: first occurence of s if occurence of s in accept. NULL otherwise.
**/

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;
	int accept_chr = 0;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(accept + j) == *(s + i))
			{
				accept_chr = 1;
				break;
			}
		}
		if (accept_chr)
			return (&s[i]);
	}
	return (NULL);
}
