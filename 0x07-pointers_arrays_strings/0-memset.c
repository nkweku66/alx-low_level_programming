#include "main.h"

/**
 * _memset - sets the memory
 * @s: a pointer
 * @b: char to copy
 * @n: the number of bytes
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
