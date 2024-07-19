#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - print strings separated and followed by a newline
 *@separator: the separator
 *@n: numbers of argument passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	va_list strings;
	char *str;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	putchar('\n');
}
