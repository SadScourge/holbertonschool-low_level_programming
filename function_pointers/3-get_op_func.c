#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 **get_op_func - look if given operator is found
 *@s: the operator
 *Return: the correct function associated with the operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
