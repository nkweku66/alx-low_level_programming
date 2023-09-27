#include "main.h"

/**
 * prime - prime numbers
 * @n: number
 * @divisor: divisor
 *
 * Return: 1 on success and 0 when not prime
 * Author - Nana Obeng
 */

int prime(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor <= 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (prime(n, divisor - 1));
}

/**
 * is_prime_number - is a prime number
 * @n: number
 *
 * Return: 1 on success
 */

int is_prime_number(int n)
{
	return (prime(n, n - 1));
}
