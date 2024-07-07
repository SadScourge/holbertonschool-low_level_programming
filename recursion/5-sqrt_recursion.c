#include "main.h"

/**
 *sqrt_helper - compute the square root of given number
 *@n: the input number
 *@sqrt: current guess of the square root
 *Return: the sqrt or -1 if none is found
 */
int sqrt_helper(int n, int sqrt)
{
	if ((sqrt * sqrt) == n)
	{
		return (sqrt);
	}
	else if ((sqrt * sqrt) > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, sqrt + 1));
}
/**
 *_sqrt_recursion - compute the square root of given number
 *@n: the input number
 *Return: -1 if n has no natural sqrt or pass to the second function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 0));
}
