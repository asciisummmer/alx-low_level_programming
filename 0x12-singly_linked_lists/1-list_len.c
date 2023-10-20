#include "lists.h"

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
 * list_len - get number of node in single linked list
 * @h: single linked list
 *
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	size_t size_node = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		size_node++;
		temp = temp->next;
	}
	return (size_node);
}

