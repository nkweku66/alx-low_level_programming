#include <stdio.h>

/**
 * main - void
 * Return: nothing
 */

int main(void)
{
	unsigned int a = 1, b = 2, next, i;

	printf("%d, %d, ", a, b);

	for (i = 2; i < 98; i++)
	{
		next = a + b;
		printf("%d, ", next);
		a = b;
		b = next;
	}
	printf("%d\n", next);
	return (0);
}
