#include "main.h"

/**
 * _memset - fill memory with byte
 * @s: memory to fill
 * @b: character to fill memory
 * @n: number of memory to fill
 *
 * Return: pointer of memory fill
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
