#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1: first string
 *@s2: second string
 *Return: 0 if equal, positive if s1 > s2 or negative if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
