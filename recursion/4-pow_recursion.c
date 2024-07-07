#include "main.h"

/**
 *_pow_recursion - compute the value of x power y
 *@x: the value to exponentiate
 *@y: the power value
 *Return: x^y or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
