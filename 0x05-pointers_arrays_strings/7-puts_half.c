#include <unistd.h>

#include "main.h"

/**
 * puts_half - print a half string
 * @str: string to print
 */

void puts_half(char *str)
{
	int start = 0, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
		start = len - len / 2;
	else
		start = len / 2;
	for (; str[start] != '\0'; start++)
	{
		write(1, &str[start], 1);
	}
	write(1, "\n", 1);
}
