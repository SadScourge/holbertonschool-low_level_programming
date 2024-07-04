#include "main.h"

/**
 *_strstr - locate a substring
 *@haystack: main string to analyse
 *@needle: the substring to locate
 *Return: pointer to the beginning of the located substring
 *or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *needlereset = needle;

	if (*needle == '\0')
	{
		return (0);
	}
	while (*haystack != '\0')
	{
		if (*needle == *haystack)
		{
			start = haystack;
		}
		while (*needle == *haystack)
		{
			if (*needle == '\0')
			{
				return (start);
			}
			haystack++;
			needle++;
		}
		needle = needlereset;
		haystack = start;
		haystack++;
	}
	return (0);
}
