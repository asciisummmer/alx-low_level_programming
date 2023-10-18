#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strstr - find substring needle in haystack
 *
 * @haystack: string for search
 * @needle: string to find
 *
 * Return: first occurence of needle if needle in  haystack. NULL otherwise.
**/

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	int not_in = 0;

	for (i = 0; *(haystack + i); i++)
	{
			if (haystack[i] == needle[0])
			{
				for (j = 0; *(needle + j); j++)
				{
					if (*(needle + j) != *(haystack + i + j))
					{
							not_in = 1;
							break;
					}
				}
				if (not_in)
				{
					not_in = 0;
				}
				else
				{
					return (&haystack[i]);
				}
			}
		}
	return (NULL);
}
