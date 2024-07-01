#include "main.h"

/**
*_strchr - locate a character in a string
*@s: string to scan
*@c: char to locate
*Return: start of the dest memory area
*/
char *_strchr(char *s, char c)
{
	while ((*s != c) && (*s != '\0'))
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return (void);
		}
		s++;
	}
}