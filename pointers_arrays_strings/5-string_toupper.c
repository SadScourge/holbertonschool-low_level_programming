#include "main.h"

/**
 *string_toupper - put all lowercase characters into uppercase
 *@str: the string to modify
 *Return: always 0
 */
char *string_toupper(char *str)
{
	char *start = str;

	while (*str != '\0')
	{
		if ((*str >= 97) && (*str <= 122))
		{
			*str = *str - 32;
		}
		str++;
	}
	return (start);
}
