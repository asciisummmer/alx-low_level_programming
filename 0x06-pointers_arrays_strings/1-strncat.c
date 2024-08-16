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

/**
  * _strncat - concat two string
  * @dest: destination of string
  * @src: string to concatenates
  * @n: number of character
  *
  * Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len_dest = _strlen(dest);

	while (src[i] != '\0' && i < n)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
