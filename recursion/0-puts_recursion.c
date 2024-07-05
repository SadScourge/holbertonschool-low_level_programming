#include "main.h"

/**
 *_puts_recursion - print the string followed by a newline
 *@s: the string to print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
