#include <stdio.h>
void print_phrase(void) __attribute__((constructor));

/**
 * print_phrase - print phrase before main
 */

void print_phrase(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my ");
}