#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line
* @separator: separator to print betwen two strings
* @n: number of argument
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str = NULL;

	va_start(args, format);
	while (format[i] != '\0')
    {
        if (format[i] == 'c' || format[i] == 'i')
        {
            va_arg(args, int);
        }
        i++;
    }
    
	printf("\n");
	va_end(args);
}
