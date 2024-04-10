#include <stdio.h>

/**
 * main - void
 * Return: nothing
 */

int main(void)
{
	unsigned long a = 1, b = 2, next;
	int count = 0;

	printf("%lu, %lu, ", a, b);

	while (count < 98)
	{
		next = a + b;
		printf("%lu, ", next);
		a = b;
		b = next;
		count++;
	}
	printf("\n");
	return (0);
}
