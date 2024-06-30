#include "main.h"

/**
 *puts_half - print the second half of a string
 *@str: string to print
 */
void puts_half(char *str)
{
	int length = 0;

	while (str[length] != 0)
	{
		length++;
	}
	length = length / 2;
	while (*str != '\0')
	{
		_putchar(str[length]);
		str++;
	}
	_putchar('\n');
}
