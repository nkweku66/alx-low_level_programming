#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a string in reverse
 * @s: sting to be reversed
 */

//void rev_string(char *s)
//{
//	int len, count, end;
//	char beg;
//
//	len = 0;
//
//	while (s[len] != '\0')
//	{
//		len++;
//		len--;
//		for (count = 0; count <= len / 2; count++)
//		{
//			beg = s[count];
//			end = s[len - count];
//			s[count] = end;
//			s[len - count] = beg;
//		}
//	}
//}

void rev_string(char *s)
{
	int i, len, temp;
	len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

