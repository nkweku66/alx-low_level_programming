#include <stdio.h>
#include "main.h"

/**
 * main - prints fizzBuzz
 *
 * Return: nothing
 */

int main(void)
{
	int i, a, b;

	for (i = 1; i <= 100; i++)
	{
		a = i % 3;
		b = i % 5;

		if (a == 0 && b == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a == 0)
		{
			printf("Fizz ");
		}
		else if (b == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
