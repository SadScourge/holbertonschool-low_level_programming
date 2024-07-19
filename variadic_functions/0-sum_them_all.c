#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - compute the sum of all given variadics arguments
 *@n: numbers of arguments to add
 *Return: result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int index = 0;
	va_list arg;

	va_start(arg, n);
	for (index = 0; index < n; index++)
	{
		result += va_arg(arg, int);
	}
	va_end(arg);
	return (result);
}
