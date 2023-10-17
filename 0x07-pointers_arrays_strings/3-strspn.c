#include "main.h"
#include <stddef.h>

/**
 * _strspn - locate chr in str
 * @s: string for searchl
 * @accept: character to find
 *
 * Return: pointer of first occurence if chr find. NULL otherwise.
**/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, indice = 0;

	for (i = 0; *(accept + i); i++)
	{
		for (j = 0; *(s + j); j++)
		{
			if (*(accept + i) == *(s + j))
			{
				if (j > indice)
					indice = j;
				break;
			}
		}
	}
		return ((unsigned int)indice + 1);
}
