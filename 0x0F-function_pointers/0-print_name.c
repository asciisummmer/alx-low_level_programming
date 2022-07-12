#include "function_pointers.h"

/**
* print_name - display string with pointer to function
* @name: string to print
* @f: pointer to function
* Return: Nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
	else
	{
		f = put_str;
		f(name);
	}
}

/**
* put_str - display string
* @str: string to print
* Return: Nothing.
*/

void put_str(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
* _putchar - display string
* @c: display one caracter
* Return: Nothing.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
