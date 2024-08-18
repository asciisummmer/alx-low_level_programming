#include "main.h"

/**
 * leet - encode string into 1337
 * @s: string to encode
 *
 * Return: string encoded
*/

char *leet(char *s)
{
	int i = 0, j = 0;
	char target_character[] = "a4e3o0l1t7";

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; target_character[j] != '\0'; j += 2)
		{
			if (s[i] == target_character[j] || s[i] == target_character[j] - 32)
			{
				s[i] = target_character[j + 1];
			}
		}
	}
	return (s);
}
