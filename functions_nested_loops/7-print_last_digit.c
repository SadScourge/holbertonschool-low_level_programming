#include "main.h"

/**
 * print_last_digit - compute the absolute value
 * @n: initial value
 * Return: modulo ten of n
 */
int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}
