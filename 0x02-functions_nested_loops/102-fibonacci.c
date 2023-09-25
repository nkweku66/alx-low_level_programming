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
	long long int a = 1, b = 2, c;

	printf("%lld, %lld", a, b);

	for (i = 3; i <= num; ++i)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}
	return (0);
}
