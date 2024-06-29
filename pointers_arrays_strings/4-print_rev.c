#include "main.h"

/**
 *print_rev - print the string reversed
 *@s: string to print
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != 0)
	{
		index++;
	}
	while (index > 0)
	{
		index--;
		_putchar(s[index]);
	}
	_putchar('\n');
}
