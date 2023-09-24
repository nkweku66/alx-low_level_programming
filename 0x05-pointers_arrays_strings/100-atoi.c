#include "main.h"
#define INT_MIN (-2147483647 - 1)
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
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (result > (INT_MAX - digit) / 10)
			{
				return INT_MIN;
			}

			result = result * 10 + (s[i] - '0');
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
	}
	return result * sign;
}
