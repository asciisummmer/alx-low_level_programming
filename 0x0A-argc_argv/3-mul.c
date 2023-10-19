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
 * _atoi - convert string to int
 * @s: string to check
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int number = 0;

	for (i = 0; *(s + i) == '-' || *(s + i) == '+'; i++)
	{
		if (*(s + i) == '-')
			sign *= -1;
	}

	for (; *(s + i); i++)
	{
		number = number * 10 + (*(s + i) - 48);
	}
	return (number * sign);
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
	if (argc != 3)
	{
		_putstr(1, "Error\n", 6);
		return (1);
	}
	print_number(_atoi(argv[1]) * _atoi(argv[2]));
	_putstr(1, "\n", 1);
	return (EXIT_SUCCESS);
}
