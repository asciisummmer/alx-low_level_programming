#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
* @separator: separator to print betwen two numbers
* @n: number of argument
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, value = 0;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (separator != NULL && i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
