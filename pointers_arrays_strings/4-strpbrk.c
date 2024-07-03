#include "main.h"
/**
 *_strpbrk - search a string for any set of bytes
 *@s: string to analyze
 *@accept: list of char to find
 *Return: pointer to bytes that matches or null if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while ((*s != *accept) && (*s != '\0'))
	{
		while ((*s != *accept) && (*accept != '\0'))
		{
			accept++;
		}
		if (*accept == '\0')
		{
			accept = start;
		}
		if (*s !=  *accept)
		{
			s++;
		}
	}
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (s);
	}
}
