#include "main.h"

/**
 * print_number - print number
 * @n: number to print
 */

void print_number(int n)
{
	char c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		print_number(n / 10);

	c = (n % 10) + 48;
	write(1, &c, 1);
}

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


int main(int argc, char __attribute((unused)) * argv[])
{
	print_number(--argc);
	_putstr(1, "\n", 1);
	return (EXIT_SUCCESS);
}
