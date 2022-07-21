#include "main.h"

/**
 * main - print fizz buzz
 * Return:  0 for success.
 */

int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
