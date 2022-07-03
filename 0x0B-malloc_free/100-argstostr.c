#include "main.h"

/**
* _strlen - return size of string
* @str: string to get lenght
* Return: size of string
*/

unsigned int _strlen(char *str)
{
	unsigned int size = 0;

	if (str == NULL || str[0] == '\0')
		return (0);
	while (*str)
	{
		size++;
		str++;
	}
	return (size);
}

/**
* argstostr - args to string
* @ac: size of array
* @av: array of string
* Return: string of argument
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, size = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac && av[i] != NULL; i++)
	{
		size += _strlen(av[i]) + 1;
	}
	str = malloc((sizeof(char) * size) + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac && av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			str[k] = av[i][j];

		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
