#include "main.h"

/**
 *_strlen_recursion - get the lenght of a string
 *@s: string input
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
