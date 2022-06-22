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