#include "main.h"
11;rgb:0000/0000/0000
/**
 * main - prints first 50 fibonnaci numbers
 *
 * Return: numbers
 * Author - Nana Obeng
 */

int main(void)
{
	int num = 50, i;
	unsigned int a = 1, b = 2, c;

	printf("%u, %u", a, b);

	for (i = 3; i <= num; ++i)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}
	return (0);
}
