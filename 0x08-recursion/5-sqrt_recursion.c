#include "main.h"

/**
 * checker - checks
 * @n: number
 * @base: the base number
 *
 * Return: upon success
 * Author - Nana Obeng
 */

int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}

	if (n * n > base)
	{
		return (-1);
	}
	return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - find sqroot
 * @n: the square number
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
