#include <stdio.h>
int print_phrase(void) __attribute__((constructor));

/**
 * print_phrase - print phrase before main
 *
 * Return: exit success
 */

int print_phrase(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
