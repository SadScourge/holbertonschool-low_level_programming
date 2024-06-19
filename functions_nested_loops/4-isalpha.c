#include "main.h"

/**
 * _islower - check if the char is lowercase
 * @c: the value to check
 * Return: return 1 if lower, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 97 && c < 122)  || (c > 65 && c < 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
