#include <stdio.h>
void print_phrase(void) __attribute__((constructor));

/**
 * print_phrase - print phrase before main
 */

void print_phrase()
{
	printf("You're beat! and yet, you must allow,\nI bore my ");
	printf("house upon my back!\n");
}