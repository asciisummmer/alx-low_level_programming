#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
*/

void rev_string(char *s)
{
	int i = 0, len = 0;
	char swapper;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		swapper = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = swapper;
	}
}
