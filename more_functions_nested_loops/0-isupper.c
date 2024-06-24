#include "main.h"

/**
 *_isupper - check if the char is uppercase
 *@c: char to check
 *Return: 1 if upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
