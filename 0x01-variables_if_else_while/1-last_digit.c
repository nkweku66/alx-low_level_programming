#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 on success
 * Author - Nana Obeng
 */

int main(void)
{
	char stg[] = "Last digit of";
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = (n % 10);

        if (d > 5)
        {
                printf("%s %d is %d and is greater than 5\n", stg, n, d);
	}
	else if (d < 6 && d != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", stg, n, d);
	}
	else
	{
		printf("%s %d is %d and is 0\n", stg, n, d);
	}
	return (0);
}
