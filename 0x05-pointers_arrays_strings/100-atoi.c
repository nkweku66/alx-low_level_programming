#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string
 *
 * Return: 0
 * Author - Nana Obeng
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int found_digit = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];

		if (c == '-')
		{
			sign *= -1;
		}
		else if (c >= '0' && c <= '9')
		{
			int digit = c - '0';

			if (result > (INT_MAX - digit) / 10)
			{
				return INT_MIN;
			}

			result = result * 10 + digit;
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
	}
	return result * sign;
}
