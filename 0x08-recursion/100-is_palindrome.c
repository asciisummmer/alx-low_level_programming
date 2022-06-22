#include "main.h"

/**
* _strlen_recursion - return size of string  with recursion
* @s: string to print
* Return: return size of string
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	else
	{
		return (0);
	}
}

/**
* check_string - check is palindrome
* @s: string
* @beg: indice begine
* @end: indice end
* Return: size of sting - 1
*/

int check_string(char *s, int beg, int end)
{
	if (s[beg] != s[end])
		return (0);
	else if (beg >= end)
		return (1);
	return (1 + check_string(s, beg + 1, end - 1));
}

/**
* is_palindrome - check if number is prime or not
* @s: string to check is palindrome or not
* Return: 1 if string is palindrome else 0
*/

int is_palindrome(char *s)
{
	int palindrome;
	int size = _strlen_recursion(s);

	if (size <= 1)
		return (0);
	palindrome = check_string(s, 0, size - 1);
	return ((palindrome - 1 ==  size / 2) ? 1 : 0);
}
