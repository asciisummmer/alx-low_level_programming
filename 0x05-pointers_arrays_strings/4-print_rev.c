#include "main.h"

#include <unistd.h>

/**
 * print_rev - print string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	--i;
	for (; s[i]; --i)
	{
		write(1, &s[i], 1);
	}
	write(1, "\n", 1);
}
