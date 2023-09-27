#include "main.h"

/**
 * factorial - calculates the factorial
 * @n: number
 *
 * Return: result upon success
 * Author - Nana Obeng
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1);
}
