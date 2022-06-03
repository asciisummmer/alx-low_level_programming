#include <stdio.h>
/**
 * main - Print alphabet
 * Return: 0 to say everything is done
 */

int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
