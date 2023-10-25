#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strspn - locate chr in str
 * @s: string for searchl
 * @accept: character to find
 *
 * Return: indice of chr
**/

unsigned int _strspn(char *s, char *accept)
{
	int i, j = 0;
	int accept_chr = 0;
	unsigned int size = 0;

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
		{
			accept_chr = 0;
		}
		else
		{
			size = i;
			break;
		}
	}
	return (size);
}
