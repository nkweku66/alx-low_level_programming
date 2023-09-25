#include "main.h"

/**
 * *_memset - fils memory with a constant byte
 * @s: pointer
 * @b: value
 * @n: number of bytes to be filled
 *
 * Return: s
 * Author - Nana Obeng
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}
	return (s);
}
