#include "main.h"

/**
 *_strlen_recursion - get the lenght of a string
 *@s: string input
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	static int count = 1;

	if (*s != '\0')
	{
		count++;
		s++;
		_strlen_recursion(s);
	}
	return (count - 1);
}
