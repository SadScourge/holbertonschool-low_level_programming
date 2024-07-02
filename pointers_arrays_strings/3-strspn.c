#include "main.h"
/**
 *_strspn - get the length of a prefix substring
 *@s: string to analyse
 *@accept: list of character to count
 *Return: count of char found
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *start = accept;

	while (*s != ' ')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
			}
			accept++;
		}
		s++;
		accept = start;
	}
	return (count);
}