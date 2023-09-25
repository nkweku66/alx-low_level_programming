#include "main.h"

/**
 * main - print sthe sum of multiples
 *
 * Return: nothing
 * Author - Nana Obeng
 */

int main(void)
{
	int limit = 1024;
	int sum = 0;
	int i;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
