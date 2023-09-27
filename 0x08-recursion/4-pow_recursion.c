#include "main.h"

/**
 * _pow_recursion - calculates the exponent
 * @x: value to raise
 * @y: number to raise
 *
 * Return: power
 * Author - Nana Obeng
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
