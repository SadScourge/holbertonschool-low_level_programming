#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - print numbers with a separator followed by a newline
 *@separator: the separator
 *@n: numbers of argument passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	va_list numbers;
	int num;

	va_start(numbers, n);
	for (index = 0; index < n; index++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	putchar('\n');
}
