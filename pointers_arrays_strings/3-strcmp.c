#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1: first string
 *@s2: second string
 *Return: 0 if equal, positive if s1 > s2 or negative if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int lengths1 = 0;
	int lengths2 = 0;

	while (s1[lengths1] != 0)
	{
		lengths1++;
	}
	while (s2[lengths2] != 0)
	{
		lengths2++;
	}
	if (lengths1 == lengths2)
	{
		return (0);
	}
	else if (lengths1 > lengths2)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
