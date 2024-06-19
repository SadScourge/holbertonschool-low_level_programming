#include "main.h"

/**
 * _islower - check if the char is lowercase
 * @c: the value to check
 * Return: return 1 if lower, 0 otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
