#include "main.h"

/**
 *factorial - return the factorial of given number
 *@n: input number
 *Return: the factorial or -1 if given number is negative
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
