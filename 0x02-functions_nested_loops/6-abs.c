#include "main.h"
#include <stdlib.h>

/**
 * _abs - returns the absolute a number
 * @n: argument
 *
 * Author - Nana Obeng
 */

int _abs(int n)
{
	if ( n < 0)
	{
		n *= -1;
		_putchar(n);
	}
	else
	{
		_putchar(n);
	}
}
