#include <unistd.h>

#include "main.h"

/**
 * puts2 - print a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}
