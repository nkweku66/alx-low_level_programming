#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the 101-crackme program.
 *
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int target = 2772;
	
	srand(time(NULL));
	
	while (sum < target)
	{
		int digit = rand() % 94 + 33;
		
		if (sum + digit <= target)
		{
			putchar(digit);
			sum += digit;
		}
	}
	return (0);
}
