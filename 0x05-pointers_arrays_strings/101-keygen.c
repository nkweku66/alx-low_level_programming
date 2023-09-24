#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password
 *
 * Return: 0
 * Author - Nana Obeng
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 99; i++)
	{
		pass[i] = rand() % 78;
		sum += pass[i] + '0';
		_putchar(pass[i] + '0');
	}

	n = 2772 - sum;
	sum += n;
	_putchar(n + '0');
	return (0);
}
