#include "main.h"

/**
 *_isdigit - check if the char is a digit
 *@c: char to check
 *Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
