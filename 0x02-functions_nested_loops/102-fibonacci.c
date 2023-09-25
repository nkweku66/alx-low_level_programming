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
	int a = 0, b = 1, c;

	printf("%d, %d", a, b);

	for (i = 2; i <= num; ++i)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	return (0);
}
