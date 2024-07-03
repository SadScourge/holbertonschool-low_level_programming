#include "main.h"

/**
 *_strstr - locate a substring
 *@haystack: main string to analyse
 *@needle: the substring to locate
 *Return: a pointer to the beginning of the located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *haystackreturn;

	while(*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack == *needle)
			{
				start = needle;
				haystackreturn = haystack;
				while (*haystack == *needle)
				{
					haystack++;
					needle++;
				}
				if (*needle == '\0')
				{
					return (start);
				}
				else if (*haystack == '\0')
				{
					haystack = haystackreturn;
					haystack++;
				}
			}
			needle++;
		}
		haystack++;
	}
	return (0);
}