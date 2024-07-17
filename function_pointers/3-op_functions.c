#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 *op_add - compute the addition of a & b
 *@a: first number
 *@b: second number
 *Return: result of the computation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - compute the substraction of a & b
 *@a: first number
 *@b: second number
 *Return: result of the computation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - compute the substraction of a & b
 *@a: first number
 *@b: second number
 *Return: result of the computation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - compute the division of a & b
 *@a: first number
 *@b: second number
 *Return: result of the computation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - compute the modulo of a & b
 *@a: first number
 *@b: second number
 *Return: result of the computation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
