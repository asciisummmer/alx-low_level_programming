#include "main.h"


/**
 * _strlen - size of string
 * @s: string to check
 *
 * Return: len of string
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; *(s + i); ++i)
	{

	}
	return (i);
}

/**
 * _putstr - size of string
 * @fd: standard output to write
 * @s: string to write
 * @len: size of string
 */

void _putstr(int fd, char *s, int len)
{
	write(fd, s, len);
}


/**
 * main - main function for taking args
 * @argc: number of args
 * @argv: args
 *
 * Return: Exit success
 */


int main(int __attribute__((unused)) argc, char *argv[])
{
	while (*argv != NULL)
	{
		_putstr(1, *argv, _strlen(*argv));
		_putstr(1, "\n", 1);
		argv++;
	}
	return (EXIT_SUCCESS);
}
