#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line
* @separator: separator to print betwen two strings
* @n: number of argument
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str = NULL;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		str = (char *)va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
