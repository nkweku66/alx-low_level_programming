#include "main.h"

/**
 * main - prints first 50 fibonnaci numbers
 *
 * Return: numbers
 * Author - Nana Obeng
 */

int main(void)
{
	int num = 50, i;
	unsigned long a = 1, b = 2, c;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= num; ++i)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
