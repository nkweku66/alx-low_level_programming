#include "main.h"

/**
 * main - sums up fibonnaci
 *
 * Return: nothing
 * Author - Nana Obeng
 */

int main(void)
{
	unsigned long a = 1, b = 2, c, d = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			d += a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lu", d);
	return (0);
}
