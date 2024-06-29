#include "main.h"

/**
 *_strlen - Get the length of a string
 *@s: string to count
 *Return: return the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != 0)
	{
		length++;
	}
	return (length);
}
