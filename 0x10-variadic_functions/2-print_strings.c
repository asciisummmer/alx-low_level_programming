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
 * print_strings - print all string
 * @separator: string to print between integer
 * @n: number of string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;
	char *value = NULL;

	va_start(numbers, n);
	for (i = 1; i < n; i++)
	{
		value = va_arg(numbers, char *);
		if (value == NULL)
			printf("nil\n");
		else
			printf("%s", value);
		if (separator != NULL)
			printf("%s", separator);
	}
	if (n > 0)
	{
		value = va_arg(numbers, char *);
		printf("%s", value);
	}
	va_end(numbers);
	printf("\n");
}
