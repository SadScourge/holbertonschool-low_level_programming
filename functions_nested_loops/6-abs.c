#include "main.h"

/**
 * _abs - compute the absolute value
 * @r:initial value
 * Return: absolute value of int
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);
	}
}
