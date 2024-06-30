#include "main.h"

/**
 *_atoi - convert a string to an integer
 *@s: string to convert
 *Return: result
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int index = 0;

	while (s[index] != '\0' && (s[index] < '0' || s[index] > '9'))
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}
		index++;
	}
	while (s[index] >= '0' && s[index] <= '9')
	{
		int digit = s[index] - '0';

		if (sign == 1 && (result > (2147483647 - digit) / 10))
		{
			return (2147483647);
		}
		if (sign == -1 && (result > (2147483648U - digit) / 10))
		{
			return (-2147483648);
		}
		result = result * 10 + digit;
		index++;
	}
	return (result * sign);
}
