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
		pass[i] = rand() % 10 + 48;
		sum += pass[i];
		putchar(pass[i]);
	}

	n = 2772 - sum;
	if (n >= 48 && n <= 57)
	{
		putchar(n);
	}
	else
	{
		n = rand() % 10 + 48;
		putchar(n);
	}
	return (0);
}
