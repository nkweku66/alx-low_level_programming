#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: success
 * Author - Nana Obeng
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *str = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
		{
			return (str);
		}
		haystack = str + 1;
	}
	return (NULL);
}
