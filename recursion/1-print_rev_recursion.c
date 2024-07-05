#include "main.h"

/**
 *_puts_recursion - print the string followed by a newline
 *@s: the string to print
 */
void _print_rev_recursion(char *s)
{
	char temp;

	if (*s != '\0')
	{
		temp = *s;
		s++;
		_print_rev_recursion(s);
		_putchar(temp);
	}
}