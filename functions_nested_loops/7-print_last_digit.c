#include "main.h"

/**
 * print_last_digit - compute the absolute value
 * @n: initial value
 * Return: modulo ten of n
 */
int print_last_digit(int n)
{
	n = (n % 10);
	if (n < 0)
	{
		n = (n * -1);
	}
	_putchar('0' + n);
	return (n);
}
