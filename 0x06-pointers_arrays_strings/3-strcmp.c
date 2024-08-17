#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between string
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	for (; s1[i] != '\0'; i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
	}
	return ((s2[i] != '\0') ? -s2[i] : 0);
}
