#include <stdio.h>
/**
 * main - Print digits
 * Return: 0 to say everything is done
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
