#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: sting to be reversed
 */

void rev_string(char *s)
{
	int len, count, end;
	char beg;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
		len--;
		for (count = o; count <= len/2; count++)
		{
			beg = s[count];
			end = s[len - count];
			s[len - count] = beg;
		}
	}
}
