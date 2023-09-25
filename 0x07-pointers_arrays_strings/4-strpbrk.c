#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: bytes to match
 *
 * Return: s
 * Author - Nana Obeng
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;
		char *current = s;

		while (*a)
		{
			if (*a == *current)
			{
				return current;
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
