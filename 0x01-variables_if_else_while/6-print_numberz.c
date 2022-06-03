#include <stdio.h>
/**
 * main - Print digits
 * Return: 0 to say everything is done
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + 48);
	}
	putchar('\n');
	return (0);
}
