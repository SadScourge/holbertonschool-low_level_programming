#include "main.h"

/**
 *puts2 - print every other character of a string
 *@str: string to print
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str != '\0')
		{
			str++;
		}
	}
	_putchar('\n');
}
