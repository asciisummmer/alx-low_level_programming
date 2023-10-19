#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination copy
 * @src: source of copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
