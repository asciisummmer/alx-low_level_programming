#include "variadic_functions.h"

/**
 * _strlen - size of string
 * @s: string to check
 *
 * Return: len of string
 */

int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; *(s + i); ++i)
	{

	}
	return (i);
}

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
 * print_numbers - print all integer
 * @separator: string to print between integer
 * @n: number of integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;

	va_start(numbers, n);
	for (i = 1; i < n; i++)
	{
		print_number(va_arg(numbers, unsigned int));
		if (separator != NULL)
			write(1, separator, _strlen(separator));
	}
	if (n > 0)
		print_number(va_arg(numbers, unsigned int));
	va_end(numbers);
	write(1, "\n", 1);
}
