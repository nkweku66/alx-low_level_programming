#include "main.h"

/**
 * _atoi - converts a string into an integer
 * _atoi_recursive - recursive
 * @s: the string
 * @sign: sign
 * @result: results
 * @found_digit: found a digit
 * Return: 0
 * Author - Nana Obeng
 */

int _atoi_recursive(char *s, int sign, int result, int found_digit)
{
	if (*s == '\0')
	{
		return found_digit ? result * sign : 0;
	}

	char c = *s;

	if (c == ' ' || c == '\t' || c == '\n')
	{
		return _atoi_recursive(s + 1, sign, result, found_digit);
	}
	else if (c == '-')
	{
		return _atoi_recursive(s + 1, -1, result, found_digit);
	}
	else if (c == '+')
	{
		return _atoi_recursive(s + 1, 1, result, found_digit);
	}
	else if (c >= '0' && c <= '9')
	{
		int digit = c - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return sign == -1 ? INT_MIN : INT_MAX;
		}

		result = result * 10 + digit;
		found_digit = 1;
		return _atoi_recursive(s + 1, sign, result, found_digit);
	}
	else
	{
		return found_digit ? result * sign : 0;
	}
}

int _atoi(char *s)
{
	return _atoi_recursive(s, 1, 0, 0);
}
