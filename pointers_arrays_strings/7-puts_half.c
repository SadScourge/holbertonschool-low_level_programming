#include "main.h"

/**
 *puts_half - print the second half of a string
 *@str: string to print
 */
void puts_half(char *str)
{
	int length = 0;
	int half;

	while (str[length] != 0)
	{
		length++;
	}
	for (half = (length + 1) / 2; half < length; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
