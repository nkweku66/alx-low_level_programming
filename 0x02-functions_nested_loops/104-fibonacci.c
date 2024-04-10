#include <stdio.h>

/**
 * main - void
 * Return: nothing
 */

int main(void)
{
	unsigned long a = 1, b = 2, next, i;

	printf("%lu, %lu, ", a, b);

	for (i = 2; i < 98; i++)
	{
		next = a + b;
		printf("%lu, ", next);
		a = b;
		b = next;
	}
	printf("%lu\n", next);
	return (0);
}
