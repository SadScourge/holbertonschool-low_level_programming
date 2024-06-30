#include "main.h"

/**
 *leet - leetify the string
 *@str: the string to modify
 *Return: start of the string
 */
char *leet(char *str)
{
	char *start = str;
	char chars[] = "aAeEoOtTlL";
	char leet[]  = "4433007711";
	int index;

	while (*str != '\0')
	{
		for (index = 0; chars[index] != '\0'; index++)
		{
			if (*str == chars[index])
			{
				*str = leet[index];
				break;
			}
		}
		str++;
	}
	return (start);
}
