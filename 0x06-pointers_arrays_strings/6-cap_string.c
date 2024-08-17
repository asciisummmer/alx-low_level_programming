#include "main.h"

/**
 * is_separator - verify character is separator
 * @c: character
 *
 * Return: 1 if is separator else 0
*/

int is_separator(char c)
{
	if (c == '\n' || c == ' ' || c == '\t' || c == ',')
	{
		return (1);
	}
	else if (c == ';' || c == '.' || c == '!' || c == '?')
	{
		return (1);
	}
	else if (c == '"' || c == '(' || c == ')' || c == '{' || c == '}')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * cap_string - catiptalize word of string
 * @s: string to capitalize
 *
 * Return: Capitalize string
 */

char *cap_string(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (i != 0 && is_separator(s[i - 1]) && s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
