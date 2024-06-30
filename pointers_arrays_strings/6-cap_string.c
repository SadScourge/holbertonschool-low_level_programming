#include "main.h"

/**
 *cap_string - capitalize all words
 *@str: the string to modify
 *Return: start of the string
 */
char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int index;
	int sep = 1;
	char *start = str;

	while (*str != '\0')
	{
		if ((*str >= 97) && (*str <= 122))
		{
			if (sep != 0)
			{
				*str = *str - 32;
			}
		}
		sep = 0;
		for (index = 0; index < 13; index++)
		{
			if (*str == separators[index])
			{
				sep = 1;
			}
		}
		str++;
	}
	return (start);
}
