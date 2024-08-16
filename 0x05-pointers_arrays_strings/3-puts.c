#include <unistd.h>

#include "main.h"

/**
 * _puts - print a string
 * @str: string to print
 */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}
