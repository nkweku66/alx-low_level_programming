#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 *
 * Return: s
 * Author - Nana Obeng
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		char *a = aacept;
		char *current = s;

		while (*a)
		{
			if (*a == *current)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
