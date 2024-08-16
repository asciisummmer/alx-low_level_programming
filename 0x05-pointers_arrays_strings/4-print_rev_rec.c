#include "main.h"

#include <unistd.h>

/**
 * print_rev - print string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	if (*s != '\0') {
		print_rev(s + 1);
	} else {
		return;
	}
	write(1, s, 1);
}
