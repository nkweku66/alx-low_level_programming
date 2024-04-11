#include <stdio.h>

/**
 * main - void
 * Return: nothing
 */

int main(void)
{
	int i;
	unsigned long a = 0, b = 1, next;
	unsigned long h1, h2, l1, l2;
	unsigned long h, l;

	for (i = 0; i < 92; i++)
	{
		next = a + b;
		printf("%lu, ", next);
		a = b;
		b = next;
	}
	h1 = a / 10000000000;
	h2 = b / 10000000000;
	l1 = a % 10000000000;
	l2 = b % 10000000000;

	for (i = 93; i < 99; i++)
	{
		h = h1 + h2;
		l = l1 + l2;
		if (l1 + l2 > 9999999999)
		{
			h++;
			l %= 10000000000;
		}

	printf("%lu%lu", h, l);
	if (i != 98)
		printf(", ");

	h1 = h2;
	h2 = h;
	l1 = l2;
	l2 = l;
	}
	printf("\n");
	return (0);
}
